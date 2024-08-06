#include "s21_string.h"

char *s21_float_to_string(double x);
char *s21_char_to_string(char x);
char *s21_int_to_string(int x);
void s21_reverse(char *str);
double s21_atof(const char *str);
char *s21_accuracy(term *t, char *value);

char *s21_accuracy(term *t, char *value) {
  if (t->accuracy != -1) {
    int accuracy = t->accuracy;
    if (accuracy <= 6) {
      int i_point;
      double our_numb = (double)s21_atof(value);
      for (int i = 0; value[i] != '\0'; i++) {
        if (value[i] == '.') {
          i_point = i;
        }
      }

      if (accuracy < 6) {
        int accuracy_numb = value[i_point + accuracy + 1] - '0';
        if (accuracy_numb >= 5) {  // мб > 5
          double accuracy_unit = 1.0;
          for (int i = 0; i < accuracy; ++i) {
            accuracy_unit /= 10;
          }
          if (our_numb >= 0) {
            our_numb += accuracy_unit;
          } else {
            our_numb -= accuracy_unit;
          }
        }
        char *out_str = s21_float_to_string(our_numb);
        for (int i = 0;; i++) {
          if (out_str[i] == '.') {
            i_point = i;
            break;
          }
          if (out_str[i] == '\0') {
            break;
          }
        }
        out_str[i_point + accuracy + 1] = '\0';
        for (int i = 0;; i++) {
          if (out_str[i] == '\0') {
            value[i] = '\0';
            break;
          } else {
            value[i] = out_str[i];
          }
        }
        free(out_str);
        return value;
      }
      return value;
    } else {
      int raz = accuracy - 6;
      int zero = s21_strlen(value);
      value = (char *)realloc(value, zero + raz + 1);
      value[zero + raz] = '\0';
      for (int i = zero; i < zero + raz; i++) {
        value[i] = '0';
      }
      value[zero + raz] = '\0';
      return value;
    }
  } else {
    return value;
  }
}

double s21_atof(const char *str) {
  int ind = 0;
  if (str[0] == '-' || str[0] == '+') {
    ind = 1;
  }
  int ind_point = -1;
  int kol_point = 0;
  for (int i = ind; str[i] != '\0'; i++) {
    if (str[i] == '.') {
      ind_point = i;
      kol_point++;
    }
  }
  if (kol_point > 1) return 0;
  double sum = 0;
  if (ind_point != -1 && kol_point == 1) {
    for (int i = ind; i < ind_point; i++) {
      if ((str[i] <= '9' && str[i] >= '0') == 0) {
        return 0;
      }
    }
    for (int i = ind; i < ind_point; i++) {
      sum = 10 * sum + (int)(str[i] - '0');
    }
    for (int i = ind_point + 1; str[i] != 0; i++) {
      if ((str[i] <= '9' && str[i] >= '0') == 0) {
        return 0;
      }
    }
    int l = 10;
    for (int i = ind_point + 1; str[i] != 0; i++) {
      sum += (double)(str[i] - '0') / l;
      l *= 10;
    }
  } else {
    for (int i = ind; str[i] != 0; i++) {
      if ((str[i] <= '9' && str[i] >= '0') == 0) {
        return 0;
      }
    }
    for (int i = ind; str[i] != 0; i++) {
      sum = 10 * sum + (int)(str[i] - '0');
    }
  }
  if (str[0] == '-') sum = -sum;
  return sum;
}

void s21_reverse(char *str) {
  int len = (int)s21_strlen(str);
  int i = 0, j = len - 1, temp;
  if (str[0] == '-') i = 1;
  while (i < j) {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
}

char *s21_int_to_string(int x) {
  int copy_x = x;
  char *str = s21_NULL;
  int len = 0;
  if (x < 0) {
    str = (char *)realloc(str, len + 1);
    len++;
    str[len - 1] = '-';
    x = -x;
  }
  while (x > 0) {
    str = (char *)realloc(str, len + 1);
    len++;
    str[len - 1] = '0' + (x % 10);
    x /= 10;
  }
  if (copy_x == 0) {
    str = (char *)realloc(str, len + 1);
    len++;
    str[len - 1] = '0';
  }
  str = (char *)realloc(str, len + 1);
  len++;
  str[len - 1] = '\0';
  s21_reverse(str);
  return str;
}

char *s21_char_to_string(char x) {
  char *str = (char *)malloc(2);
  str[0] = x;
  str[1] = '\0';
  return str;
}

char *s21_float_to_string(double x) {
  int minus = 0;
  if (x < 0) {
    minus = 1;
    x = -x;
  }
  int x_int_part = (int)x;
  int len = 0;
  if (x_int_part == 0) {
    len = 1;
  } else {
    while (x_int_part > 0) {
      x_int_part /= 10;
      len++;
    }
  }
  x_int_part = (int)x;
  x -= x_int_part;
  char *str = s21_int_to_string(x_int_part);
  str = (char *)realloc(str, len + 2);
  len += 2;
  str[len - 1] = '\0';
  str[len - 2] = '.';
  char x_fractional_part[6] = {'0', '0', '0', '0', '0', '0'};
  for (int i = 0; i < 6; i++) {
    x *= 10;
  }
  x = roundl(x);
  for (int i = 0; i < 6; i++) {
    x_fractional_part[5 - i] = (char)((int)x % 10 + '0');
    x /= 10;
  }
  str = (char *)realloc(str, len + 6);
  len += 6;
  str[len - 1] = '\0';
  str[len - 2] = x_fractional_part[5];
  str[len - 3] = x_fractional_part[4];
  str[len - 4] = x_fractional_part[3];
  str[len - 5] = x_fractional_part[2];
  str[len - 6] = x_fractional_part[1];
  str[len - 7] = x_fractional_part[0];
  if (minus) {
    str = (char *)realloc(str, len + 1);
    len++;
    str[len - 1] = '\0';
    for (int i = len - 1; i > 0; i--) {
      str[i] = str[i - 1];
    }
    str[0] = '-';
  }
  return str;
}