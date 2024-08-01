#include "s21_string.h"

char *s21_float_to_string(double x);

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