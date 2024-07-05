#include "s21_string.h"

char *s21_strrchr(const char *str, int c) {
  char *s = s21_NULL;
  for (s21_size_t i = 0;; i++) {
    if (str[i] == '\0' && c == 0) {
      return (char *)(str + i);
    } else if (str[i] == '\0') {
      return s;
    } else if (str[i] == c) {
      s = (char *)(str + i);
    }
  }
  return s;
}