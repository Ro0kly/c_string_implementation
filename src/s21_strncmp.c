#include "s21_string.h"
int s21_strncmp(const char* str1, const char* str2, s21_size_t n) {
  char* first = (char*)str1;
  char* second = (char*)str2;

  while (n--) {
    if (*first++ != *second++) {
      int a = *(first - 1) - *(second - 1);
      // if (a > 0) return 1;
      // if (a < 0) return -1;
      // if (a == 0) return 0;
      return a;
    }
  }

  return 0;
}