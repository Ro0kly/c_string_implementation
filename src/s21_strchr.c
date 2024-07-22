#include "s21_string.h"
char *s21_strchr(const char *str, int symbol) {
  s21_size_t strLength = 0;
  for (; str[strLength];) {
    strLength += 1;
  }
  strLength++;
  const char *result = s21_NULL;

  for (s21_size_t x = 0; x < strLength && result == s21_NULL; x += 1)
    if (str[x] == symbol) result = (str + x);

  return (char *)result;
}
