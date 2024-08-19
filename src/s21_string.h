#ifndef S21_STRING_H
#define S21_STRING_H

#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#define s21_NULL ((void *)0)

typedef long unsigned s21_size_t;

typedef struct {
  char flag_minus;
  char flag_plus;
  char flag_space;
  int width;
  int accuracy;
  char length;
} term;

void *s21_memchr(const void *str, int c, s21_size_t n);
int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
void *s21_memset(void *str, int c, s21_size_t n);
s21_size_t s21_strcspn(const char *str1, const char *str2);
char *s21_strerror(int errorNumber);
s21_size_t s21_strlen(const char *str);
int s21_strncmp(const char *str1, const char *str2, s21_size_t n);
char *s21_strncpy(char *dest, const char *src, s21_size_t n);
char *s21_strpbrk(const char *str1, const char *str2);
char *s21_strrchr(const char *str, int c);
char *s21_strstr(const char *str, const char *podstr);
char *s21_strtok(char *str, const char *delim);
char *s21_strncat(char *dest, const char *src, s21_size_t n);
char *s21_strchr(const char *str, int c);
void *s21_to_lower(const char *str);
void *s21_insert(const char *src, const char *str, size_t start_index);
void *s21_to_upper(const char *str);
void *s21_trim(const char *src, const char *trim_chars);
int s21_sprintf(char *str, const char *format, ...);

#endif