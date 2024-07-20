#include "s21_string.h"

char *s21_strtok(char *str, const char *delim) {
  static char *last = s21_NULL;  // Указатель на остаток строки между вызовами

  if (str != s21_NULL) {
    last = str;
  }

  if (last == s21_NULL) {
    return s21_NULL;
  }

  // первый элмент не разделитель
  char *token_start = last;
  while (*token_start && s21_strchr(delim, *token_start)) {
    token_start++;
  }

  if (*token_start == '\0') {
    last = s21_NULL;  // Нет больше токенов
    return s21_NULL;
  }

  // первый элмент разделитель
  char *token_end = token_start;
  while (*token_end && !s21_strchr(delim, *token_end)) {
    token_end++;
  }

  if (*token_end == '\0') {
    last = s21_NULL;  // Последний токен
  } else {
    *token_end = '\0';
    last = token_end + 1;
  }

  return token_start;
}
