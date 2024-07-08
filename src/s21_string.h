#include <stdio.h>
#include <stdlib.h>

typedef long unsigned s21_size_t;

void *s21_memchr(const void *str, int c, s21_size_t n);
char *s21_strrchr(const char *str, int c);
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);