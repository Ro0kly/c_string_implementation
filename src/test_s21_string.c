#include <check.h>
#include <string.h>
#include "s21_string.h"

START_TEST(memchr_1) {
  char str1[] = "abc";
  int c = 'a';
  size_t n = 3;
  ck_assert_ptr_eq(s21_memchr(str1, c, n), memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_2) {
  char str1[] = "abc";
  int c = 'b';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_3) {
  char str1[] = "abc";
  int c = 'c';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

int main() {
  int failed = 0;
  Suite *s;
  SRunner *runner;

  s = root_suite();
  runner = srunner_create(s);

  srunner_run_all(runner, CK_NORMAL);
  failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (failed == 0) ? 0 : 1;
}