#include "s21_string.h"

char *s21_strpbrk(const char *str1, const char *str2) {
  for (s21_size_t i = 0;; i++) {
    if (str1[i] == '\0') break;
    for (s21_size_t j = 0;; j++) {
      if (str1[i] == str2[j])
        return (char *)(str1 + i);
      else if (str2[j] == '\0')
        break;
    }
  }
  return s21_NULL;
}