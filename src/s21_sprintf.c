#include "s21_string.h"

char *s21_float_to_string(double x);
char *s21_char_to_string(char x);
char *s21_int_to_string(int x);
void s21_reverse(char *str);

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