#include "s21_string.h"

void *s21_memset(void *str, int c, s21_size_t n) {
  char *p1 = str;
  for (size_t i = 0; i < n; i++) {
    p1[i] = c;
  }
  return p1;
}