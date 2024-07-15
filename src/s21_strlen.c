#include "s21_string.h"

s21_size_t s21_strlen(const char *str) {
  for (size_t i = 0;; i++) {
    if (str[i] == '\0') return i;
  }
}
