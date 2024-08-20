#include "s21_string.h"

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  for (size_t i = 0;; i++) {
    if (str1[i] == '\0') {
      break;
    }
    for (size_t j = 0;; j++) {
      if (str2[j] == '\0') {
        break;
      } else if (str1[i] == str2[j]) {
        return i;
      }
    }
  }
  return s21_strlen(str1);
}