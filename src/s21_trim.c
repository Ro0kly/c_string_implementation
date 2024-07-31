#include "s21_string.h"

int divider(int c) {
  return (c == ' ' || c == '\0' || c == '\t' || c == '\n' || c == '\v' ||
          c == '\f' || c == '\r');
}

void *s21_trim(const char *src, const char *trim_chars) {
  char *str_buff = s21_NULL;
  if (src != s21_NULL && trim_chars != s21_NULL) {
    char *first_letter = (char *)src;
    char *last_letter = (char *)src + s21_strlen(src);
    while (*first_letter && s21_strchr(trim_chars, *first_letter)) {
      first_letter++;
    }
    while (last_letter != first_letter &&
           s21_strchr(trim_chars, *(last_letter - 1))) {
      last_letter--;
    }
    str_buff = (char *)calloc((last_letter - first_letter + 1), sizeof(char));
    s21_strncpy(str_buff, first_letter, last_letter - first_letter);
    *(str_buff + (last_letter - first_letter)) = '\0';
  } else if (src != s21_NULL && trim_chars == s21_NULL) {
    char *first_letter = (char *)src;
    char *last_letter = (char *)src + s21_strlen(src);
    while (*first_letter && divider(*first_letter)) {
      first_letter++;
    }
    while (last_letter != first_letter && divider(*(last_letter - 1))) {
      last_letter--;
    }
    str_buff = (char *)calloc((last_letter - first_letter + 1), sizeof(char));
    s21_strncpy(str_buff, first_letter, last_letter - first_letter);
    *(str_buff + (last_letter - first_letter)) = '\0';
  }
  return (void *)str_buff;
}