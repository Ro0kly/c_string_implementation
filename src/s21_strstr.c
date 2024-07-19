#include "s21_string.h"

char *s21_strstr(const char *str, const char *podstr) {
  if (podstr[0] == 0) return (char *)str;
  for (s21_size_t i = 0;; i++) {
    if (str[i] == '\0') {
      break;
    }
    if (str[i] == podstr[0]) {
      if (s21_strncmp(str + i, podstr, s21_strlen(podstr)) == 0) {
        return (char *)str + i;
      }
    }
  }
  return s21_NULL;
}