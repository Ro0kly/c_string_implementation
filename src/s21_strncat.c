#include "s21_string.h"

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  s21_size_t n_dest = 0;
  for (s21_size_t i = 0;; i++) {
    if (dest[i] == '\0') {
      n_dest = i;
      break;
    }
  }
  for (s21_size_t i = n_dest; i < (s21_size_t)sizeof(dest); i++) {
    dest[i] = '\0';
  }
  for (s21_size_t i = 0; i < n; i++) {
    dest[n_dest + i] = src[i];
  }
  return dest;
}