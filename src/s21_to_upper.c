#include "s21_string.h"

void *s21_to_upper(const char *str) {
  char *result_str = s21_NULL;
  char *buff = (char *)str;
  size_t len = s21_strlen(buff);
  result_str = (char *)calloc(len + 1, sizeof(char));
  if (result_str != s21_NULL) {
    for (s21_size_t i = 0; i < len; i++) {
      if (str[i] >= 'a' && str[i] <= 'z') {
        result_str[i] = str[i] - 32;
      } else {
        result_str[i] = str[i];
      }
    }
  }
  return result_str;
}