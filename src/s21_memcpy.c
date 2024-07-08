#include "s21_string.h"

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  const char *p1 = src;
  char *p2 = dest;
  for (size_t i = 0; i < n; i++) {
    p2[i] = p1[i];
  }
  return p2;
}