#include "s21_string.h"

char *s21_float_to_string(double x);
char *s21_char_to_string(char x);
char *s21_int_to_string(int x);
void s21_reverse(char *str);
double s21_atof(const char *str);
char *s21_accuracy(term *t, char *value);
char *s21_flag_plus_space(term *t, char *value);
char *s21_width(term *t, char *value);
char *s21_parser_u(char *str_pars, unsigned value);
char *s21_parser_s(char *str_pars, char *value);
char *s21_parser_d(char *str_pars, int value);
char *s21_parser_c(char *str_pars, char value);
char *s21_parser_f(char *str_pars, double value);

char *s21_parser_c(char *str_pars, char value) {
  term t = {0};
  t.accuracy = -1;
  t.width = -1;
  t.flag_minus = '0';
  t.flag_plus = '0';
  t.flag_space = '0';
  t.length = '0';
  char *full_parser_str = s21_char_to_string(value);
  for (int i = 0; str_pars[i] != '\0'; i++) {
    if (str_pars[i] == 'l') {
      t.length = 'l';
    }
    if (str_pars[i] == '-') {
      t.flag_minus = '-';
    }
  }
  int value_width = 0;
  for (int i = 0; str_pars[i] != '\0'; i++) {
    if (str_pars[i] <= '9' && str_pars[i] >= '0') {
      int a = str_pars[i] - '0';
      value_width = value_width * 10 + a;
    }
  }
  if (value_width != 0) t.width = value_width;
  full_parser_str = s21_width(&t, full_parser_str);
  return full_parser_str;
}

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

char *s21_char_to_string(char x) {
  char *str = (char *)malloc(2);
  str[0] = x;
  str[1] = '\0';
  return str;
}

char *s21_flag_plus_space(term *t, char *value) {
  if (value[0] == '-' || (t->flag_plus != '+' && t->flag_space != ' ')) {
    return value;
  } else if (t->flag_plus == '+') {
    int len = (int)s21_strlen(value);
    char temp[len];
    for (int i = 0; i < len; i++) {
      temp[i] = value[i];
    }
    value = (char *)realloc(value, len + 2);
    for (int i = 1; i < len + 1; i++) {
      value[i] = temp[i - 1];
    }
    value[len + 1] = '\0';
    value[0] = '+';
  } else if (t->flag_space == ' ') {
    int len = (int)s21_strlen(value);
    char temp[len];
    for (int i = 0; i < len; i++) {
      temp[i] = value[i];
    }
    value = (char *)realloc(value, len + 2);
    for (int i = 1; i < len + 1; i++) {
      value[i] = temp[i - 1];
    }
    value[len + 1] = '\0';
    value[0] = ' ';
  }
  return value;
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

char *s21_parser_d(char *str_pars, int value) {
  term t = {0};
  t.accuracy = -1;
  t.width = -1;
  t.flag_minus = '0';
  t.flag_plus = '0';
  t.flag_space = '0';
  t.length = '0';

  char *full_parser_str = s21_int_to_string(value);

  int value_width = 0;
  for (int i = 0; str_pars[i] != '\0'; i++) {
    switch (str_pars[i]) {
      case '+':
        t.flag_plus = '+';
        break;
      case '-':
        t.flag_minus = '-';
        break;
      case ' ':
        t.flag_space = ' ';
        break;
      case 'h':
        t.length = 'h';
        break;
      case 'l':
        t.length = 'l';
        break;
      default: {
        if (str_pars[i] >= '0' && str_pars[i] <= '9') {
          int a = str_pars[i] - '0';
          value_width = value_width * 10 + a;
        }
      } break;
    }
  }
  if (value_width != 0) t.width = value_width;
  full_parser_str = s21_flag_plus_space(&t, full_parser_str);
  full_parser_str = s21_width(&t, full_parser_str);
  return full_parser_str;
}

char *s21_parser_f(char *str_pars, double value) {
  term t = {0};
  t.accuracy = -1;
  t.width = -1;
  t.flag_minus = '0';
  t.flag_plus = '0';
  t.flag_space = '0';
  t.length = '0';
  int i_point = -1;
  int width = 0;
  char *full_parser_str = s21_float_to_string(value);
  for (int i = 0; str_pars[i] != '\0'; i++) {
    if (str_pars[i] == '.') {
      i_point = i;
      break;
    }
    if (str_pars[i] <= '9' && str_pars[i] >= '0') {
      width = 1;
    }
  }
  if (i_point == -1 && width == 0) {
    for (int i = 0; str_pars[i] != '\0'; i++) {
      if (str_pars[i] == 'f') break;
      switch (str_pars[i]) {
        case '+':
          t.flag_plus = '+';
          break;
        case '-':
          t.flag_minus = '-';
          break;
        case ' ':
          t.flag_space = ' ';
          break;
        case 'h':
          t.length = 'h';
          break;
        case 'l':
          t.length = 'l';
          break;
        default:
          break;
      }
    }
  } else if (i_point != -1 && width == 0) {
    for (int i = 0; i < i_point; i++) {
      if (str_pars[i] == '+') {
        t.flag_plus = '+';
      } else if (str_pars[i] == '-') {
        t.flag_minus = '-';
      } else if (str_pars[i] == ' ') {
        t.flag_space = ' ';
      }
    }
    int i_end_accuracy = -1;
    int value_accuracy = 0;
    for (int i = i_point + 1;; i++) {
      if (str_pars[i] >= '0' && str_pars[i] <= '9') {
        int a = str_pars[i] - '0';
        value_accuracy = value_accuracy * 10 + a;
      } else {
        i_end_accuracy = i;
        t.accuracy = value_accuracy;
        break;
      }
    }
    for (int i = i_end_accuracy; str_pars[i] != '\0'; i++) {
      if (str_pars[i] == 'h') {
        t.length = 'h';
        break;
      } else if (str_pars[i] == 'l') {
        t.length = 'l';
        break;
      }
    }
  } else if (i_point == -1 && width) {
    int i_start_width = 0;
    for (int i = 0;; i++) {
      if (str_pars[i] <= '9' && str_pars[i] >= '0') {
        i_start_width = i;
        break;
      } else {
        if (str_pars[i] == '+') {
          t.flag_plus = '+';
        } else if (str_pars[i] == '-') {
          t.flag_minus = '-';
        } else if (str_pars[i] == ' ') {
          t.flag_space = ' ';
        }
      }
    }
    int i_end_width = 0;
    int value_width = 0;
    for (int i = i_start_width;; i++) {
      if (str_pars[i] <= '9' && str_pars[i] >= '0') {
        int a = str_pars[i] - '0';
        value_width = value_width * 10 + a;
      } else {
        i_end_width = i;
        break;
      }
    }
    t.width = value_width;
    for (int i = i_end_width; str_pars[i] != '\0'; i++) {
      if (str_pars[i] == 'h') {
        t.length = 'h';
        break;
      } else if (str_pars[i] == 'l') {
        t.length = 'l';
        break;
      }
    }
  } else {
    int i_start_width = 0;
    for (int i = 0;; i++) {
      if (str_pars[i] <= '9' && str_pars[i] >= '0') {
        i_start_width = i;
        break;
      } else {
        if (str_pars[i] == '+') {
          t.flag_plus = '+';
        } else if (str_pars[i] == '-') {
          t.flag_minus = '-';
        } else if (str_pars[i] == ' ') {
          t.flag_space = ' ';
        }
      }
    }
    int value_width = 0;
    for (int i = i_start_width; i < i_point; i++) {
      int a = str_pars[i] - '0';
      value_width = value_width * 10 + a;
    }
    t.width = value_width;
    int value_accuracy = 0;
    int i_end_accuracy = 0;
    for (int i = i_point + 1;; i++) {
      if (str_pars[i] <= '9' && str_pars[i] >= '0') {
        value_accuracy = value_accuracy * 10 + (int)(str_pars[i] - '0');
      } else {
        i_end_accuracy = i;
        break;
      }
    }
    t.accuracy = value_accuracy;
    for (int i = i_end_accuracy; str_pars[i] != '\0'; i++) {
      if (str_pars[i] == 'h') {
        t.length = 'h';
        break;
      } else if (str_pars[i] == 'l') {
        t.length = 'l';
        break;
      }
    }
  }
  full_parser_str = s21_accuracy(&t, full_parser_str);
  full_parser_str = s21_flag_plus_space(&t, full_parser_str);
  full_parser_str = s21_width(&t, full_parser_str);
  return full_parser_str;
}

char *s21_parser_s(char *str_pars, char *value) {
  term t = {0};
  t.accuracy = -1;
  t.width = -1;
  t.flag_minus = '0';
  t.flag_plus = '0';
  t.flag_space = '0';
  t.length = '0';

  char *full_parser_str = (char *)malloc(s21_strlen(value));
  for (int i = 0; i < (int)s21_strlen(value); i++) {
    full_parser_str[i] = value[i];
  }
  for (int i = 0; str_pars[i] != '\0'; i++) {
    if (str_pars[i] == '-') {
      t.flag_minus = '-';
    }
  }
  int value_width = 0;
  for (int i = 0; str_pars[i] != '\0'; i++) {
    if (str_pars[i] <= '9' && str_pars[i] >= '0') {
      int a = str_pars[i] - '0';
      value_width = value_width * 10 + a;
    }
  }
  if (value_width != 0) t.width = value_width;
  full_parser_str = s21_width(&t, full_parser_str);
  return full_parser_str;
}

char *s21_parser_u(char *str_pars, unsigned value) {
  return s21_parser_d(str_pars, value);
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

char *s21_width(term *t, char *value) {
  if (t->width == -1) {
    return value;
  } else if ((int)s21_strlen(value) >= t->width) {
    return value;
  } else {
    int len = (int)s21_strlen(value);
    if (t->flag_minus == '-') {
      value = (char *)realloc(value, (s21_size_t)t->width + 1);
      for (int i = len; i < t->width + 1; i++) {
        value[i] = ' ';
      }
      value[t->width] = '\0';
      return value;
    } else {
      char *origin = (char *)malloc((s21_size_t)len);
      for (int i = 0; i < len; i++) {
        origin[i] = value[i];
      }
      value = (char *)realloc(value, (s21_size_t)(t->width + 1));
      for (int i = 0; i < t->width + 1; i++) {
        value[i] = ' ';
      }
      value[t->width] = '\0';
      int i_ = t->width;
      for (int i = len; i > -1; i--) {
        value[i_] = origin[i];
        i_--;
      }
      free(origin);
      value[t->width] = '\0';
      return value;
    }
  }
}

int s21_sprintf(char *str, const char *format, ...) {
  int return_value = 0;
  int n_procent = 0;
  for (int i = 0; format[i] != '\0'; i++) {
    if (format[i] == '%') {
      n_procent++;
    }
  }

  if (n_procent == 0) {
    for (int i = 0; i < (int)s21_strlen(format); i++) {
      str[i] = format[i];
      return_value++;
    }
    return return_value;
  }
  va_list factor;
  va_start(factor, format);
  int mode = 0;
  char str_pars[100] = {'\0'};
  int i_str_pars = 0;
  for (int i = 0; format[i] != '\0'; i++) {
    if (format[i] == '%' && mode == 0) {
      str_pars[i_str_pars] = format[i];
      mode = 1;
    } else if (format[i] != '%' && mode == 0) {
      (*str) = format[i];
      return_value++;
      str++;
    } else if (format[i] == '%' && mode) {
      mode = 0;
      for (int j = 0; j <= i_str_pars; j++) {
        str_pars[j] = '\0';
      }
      i_str_pars = 0;
      (*str) = format[i];
      return_value++;
      str++;
    } else if (format[i] != '%' && mode) {
      if (format[i] != 'c' && format[i] != 'd' && format[i] != 'f' &&
          format[i] != 's' && format[i] != 'u') {
        str_pars[i_str_pars] = format[i];
        i_str_pars++;
      } else {
        switch (format[i]) {
          case 'c': {
            char c = (char)va_arg(factor, int);
            char *full_parser_str = s21_parser_c(str_pars, c);
            for (int j = 0; full_parser_str[j] != '\0'; j++) {
              (*str) = full_parser_str[j];
              return_value++;
              str++;
            }
            for (int j = 0; j < 100; j++) str_pars[j] = '\0';
            mode = 0;
            i_str_pars = 0;
          } break;
          case 'd': {
            int d = va_arg(factor, int);
            char *full_parser_str = s21_parser_d(str_pars, d);
            for (int j = 0; full_parser_str[j] != '\0'; j++) {
              (*str) = full_parser_str[j];
              return_value++;
              str++;
            }
            free(full_parser_str);
            for (int j = 0; j < 100; j++) str_pars[j] = '\0';
            mode = 0;
            i_str_pars = 0;
          } break;
          case 'f': {
            double f = va_arg(factor, double);
            char *full_parser_str = s21_parser_f(str_pars, f);
            for (int j = 0; full_parser_str[j] != '\0'; j++) {
              (*str) = full_parser_str[j];
              return_value++;
              str++;
            }
            free(full_parser_str);
            for (int j = 0; j < 100; j++) str_pars[j] = '\0';
            mode = 0;
            i_str_pars = 0;
          } break;
          case 's': {
            char *s = va_arg(factor, char *);
            char *full_parser_str = s21_parser_s(str_pars, s);
            for (int j = 0; full_parser_str[j] != '\0'; j++) {
              (*str) = full_parser_str[j];
              return_value++;
              str++;
            }
            free(full_parser_str);
            for (int j = 0; j < 100; j++) str_pars[j] = '\0';
            mode = 0;
            i_str_pars = 0;
          } break;
          case 'u': {
            unsigned u = va_arg(factor, unsigned);
            char *full_parser_str = s21_parser_u(str_pars, u);
            for (int j = 0; full_parser_str[j] != '\0'; j++) {
              (*str) = full_parser_str[j];
              return_value++;
              str++;
            }
            free(full_parser_str);
            for (int j = 0; j < 100; j++) str_pars[j] = '\0';
            mode = 0;
            i_str_pars = 0;
          } break;
          default:
            break;
        }
      }
    }
  }
  (*str) = '\0';
  va_end(factor);
  return return_value;
}