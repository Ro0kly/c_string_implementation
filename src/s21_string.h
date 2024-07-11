#include <stdio.h>
#include <stdlib.h>

#define s21_NULL ((void *)0)

typedef long unsigned s21_size_t;

void *s21_memchr(const void *str, int c, s21_size_t n);
char *s21_strrchr(const char *str, int c);
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
void *s21_memset(void *str, int c, s21_size_t n);
s21_size_t s21_strcspn(const char *str1, const char *str2);
char *s21_strerror(int errorNumber);