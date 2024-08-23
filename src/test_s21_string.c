// cd /opt/goinfre/poochied
// git clone https://github.com/Homebrew/brew homebrew
// eval "$(/opt/goinfre/poochied/homebrew/bin/brew shellenv)"
// brew update --force --quiet
// chmod -R go-w "$(brew --prefix)/share/zsh"
// brew install check
// cd /Users/poochied/Desktop/C2_s21_stringplus-1/src
// export CPATH=/opt/goinfre/poochied/homebrew/include
// export LIBRARY_PATH=/opt/goinfre/poochied/homebrew/lib

// export CPATH=/opt/homebrew/include; export LIBRARY_PATH=/opt/homebrew/lib

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

START_TEST(memchr_4) {
  char str1[] = "abc";
  int c = 'd';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_5) {
  char str1[] = "abc";
  int c = 'a';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_6) {
  char str1[] = "abc";
  int c = 'b';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_7) {
  char str1[] = "abc";
  int c = 'c';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_8) {
  char str1[] = "abc";
  int c = 'a';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_9) {
  char str1[] = "abc";
  int c = 'b';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_10) {
  char str1[] = "abc";
  int c = 'c';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_11) {
  char str1[] = "abc";
  int c = 'a';
  size_t n = 4;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_12) {
  char str1[] = "abc";
  int c = 'a';
  size_t n = 0;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_13) {
  char str1[] = "abc";
  int c = 'd';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_14) {
  char str1[] = "abc";
  int c = 'd';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_15) {
  char str1[] = "abc";
  int c = 'd';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_16) {
  char str1[] = "abc";
  int c = 'd';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_17) {
  char str1[] = "abc";
  int c = 'd';
  size_t n = 0;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_18) {
  char str1[] = "abc";
  int c = 'd';
  size_t n = 4;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_19) {
  char str1[] = "";
  int c = 'd';
  size_t n = 0;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_21) {
  char str1[] = " ";
  int c = 'd';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_22) {
  char str1[] = "abcabc";
  int c = 'b';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_23) {
  char str1[] = "abcabc";
  int c = 'c';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_24) {
  char str1[] = "abcabc";
  int c = 'd';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_25) {
  char str1[] = "abcabc";
  int c = 'a';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_26) {
  char str1[] = "abcabc";
  int c = 'b';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_27) {
  char str1[] = "abcabc";
  int c = 'c';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_28) {
  char str1[] = "abcabc";
  int c = 'a';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_29) {
  char str1[] = "abcabc";
  int c = 'b';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_30) {
  char str1[] = "abcabc";
  int c = 'c';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_32) {
  char str1[] = "abcabc";
  int c = 'a';
  size_t n = 0;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_33) {
  char str1[] = "abcabc";
  int c = 'd';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_34) {
  char str1[] = "abcabc";
  int c = 'd';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_35) {
  char str1[] = "abcabc";
  int c = 'd';
  size_t n = 2;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_36) {
  char str1[] = "abcabc";
  int c = 'd';
  size_t n = 1;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_37) {
  char str1[] = "abcabc";
  int c = 'd';
  size_t n = 0;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_38) {
  char str1[] = "abcabc";
  int c = 'd';
  size_t n = 0;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_39) {
  char str1[] = "abcabc";
  int c = 'a';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_40) {
  char str1[] = "abc\nabc";
  int c = 'a';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_41) {
  char str1[] = "abc\0abc";
  int c = 'a';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_42) {
  char str1[] = "\0abcabc";
  int c = 'a';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memchr_43) {
  char str1[] = "abcabc\0";
  int c = 'a';
  size_t n = 3;
  ck_assert_ptr_eq(memchr(str1, c, n), s21_memchr(str1, c, n));
}
END_TEST

START_TEST(memcmp_1) {
  char str1[] = "abc";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_2) {
  char str1[] = "Abc";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_3) {
  char str1[] = "abc";
  char str2[] = "Abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_4) {
  char str1[] = "abC";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_5) {
  char str1[] = "abc";
  char str2[] = "abC";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_6) {
  char str1[] = "ABC";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_7) {
  char str1[] = "abc";
  char str2[] = "ABC";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_8) {
  char str1[] = "a b c";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_9) {
  char str1[] = "abc";
  char str2[] = "a b c";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_10) {
  char str1[] = "";
  char str2[] = "abc";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_11) {
  char str1[] = "abc";
  char str2[] = "";
  int n = 1;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_12) {
  char str1[] = " ";
  char str2[] = "abc";
  int n = 1;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_13) {
  char str1[] = "abc";
  char str2[] = " ";
  int n = 2;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_14) {
  char str1[] = "9087";
  char str2[] = "657";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_15) {
  char str1[] = "";
  char str2[] = "";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_16) {
  char str1[] = " ";
  char str2[] = " ";
  int n = 2;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_17) {
  char str1[] = "abc ";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_18) {
  char str1[] = "abc";
  char str2[] = "abc ";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_19) {
  char str1[] = " abc";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_20) {
  char str1[] = "abc";
  char str2[] = " abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_21) {
  char str1[] = "123";
  char str2[] = "123";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_22) {
  char str1[] = "123";
  char str2[] = "321";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_23) {
  char str1[] = "321";
  char str2[] = "321";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_24) {
  char str1[] = "321";
  char str2[] = "123";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_25) {
  char str1[] = "1234";
  char str2[] = "123";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_26) {
  char str1[] = "132";
  char str2[] = "1234";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_27) {
  char str1[] = "abcd";
  char str2[] = "abc";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_28) {
  char str1[] = "abc";
  char str2[] = "abcd";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_29) {
  char str1[] = "12ab";
  char str2[] = "12ab";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_30) {
  char str1[] = "ab12";
  char str2[] = "12ab";
  int n = 3;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_31) {
  char str1[] = "abc";
  char str2[] = "abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_32) {
  char str1[] = "Abc";
  char str2[] = "abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_33) {
  char str1[] = "abc";
  char str2[] = "Abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_34) {
  char str1[] = "abC";
  char str2[] = "abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_35) {
  char str1[] = "abc";
  char str2[] = "abC";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_36) {
  char str1[] = "ABC";
  char str2[] = "abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_37) {
  char str1[] = "abc";
  char str2[] = "ABC";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_38) {
  char str1[] = "a b c";
  char str2[] = "abc";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_39) {
  char str1[] = "abc";
  char str2[] = "a b c";
  int n = 4;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_50) {
  char str1[] = "abc";
  char str2[] = " abc";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_51) {
  char str1[] = "123";
  char str2[] = "123";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_52) {
  char str1[] = "123";
  char str2[] = "321";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_53) {
  char str1[] = "321";
  char str2[] = "321";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_54) {
  char str1[] = "321";
  char str2[] = "123";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_55) {
  char str1[] = "1234";
  char str2[] = "123";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_56) {
  char str1[] = "132";
  char str2[] = "1234";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_57) {
  char str1[] = "abcd";
  char str2[] = "abc";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_58) {
  char str1[] = "abc";
  char str2[] = "abcd";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_59) {
  char str1[] = "12ab";
  char str2[] = "12ab";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcmp_60) {
  char str1[] = "ab12";
  char str2[] = "12ab";
  int n = 0;
  ck_assert_int_eq(memcmp(str1, str2, n), s21_memcmp(str1, str2, n));
}
END_TEST

START_TEST(memcpy_1) {
  char str1[9] = "abc";
  char str2[] = "def";
  char str3[9] = "abc";
  s21_size_t n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_2) {
  char str1[9] = "ab\nc";
  char str2[] = "def";
  char str3[9] = "ab\nc";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_3) {
  char str1[9] = "ab\0c";
  char str2[] = "def";
  char str3[9] = "ab\0c";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_4) {
  char str1[9] = "abc";
  char str2[] = "de\0f";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_5) {
  char str1[9] = "abc";
  char str2[] = "de\nf";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_6) {
  char str1[9] = "ab\0c";
  char str2[] = "def";
  char str3[9] = "ab\0c";
  int n = 4;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_7) {
  char str1[9] = "abc";
  char str2[] = "de\0f";
  char str3[9] = "abc";
  int n = 4;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_8) {
  char str1[9] = "";
  char str2[] = "def";
  char str3[9] = "";
  int n = 3;
  memcpy(str1, str2, n);
  s21_memcpy(str3, str2, n);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(memcpy_9) {
  char str1[9] = "abc";
  char str2[] = "";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_10) {
  char str1[9] = "abc";
  char str2[] = "def";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_11) {
  char str1[9] = "abc";
  char str2[] = "def";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_12) {
  char str1[9] = "ab\nc";
  char str2[] = "def";
  char str3[9] = "ab\nc";
  int n = 4;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_13) {
  char str1[9] = "ab\0c";
  char str2[] = "def";
  char str3[9] = "ab\0c";
  int n = 0;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_14) {
  char str1[9] = "abc";
  char str2[] = "de\0f";
  char str3[9] = "abc";
  int n = 0;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_15) {
  char str1[9] = "abc";
  char str2[] = "de\nf";
  char str3[9] = "abc";
  int n = 0;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_16) {
  char str1[9] = "ab\0c";
  char str2[] = "def";
  char str3[9] = "ab\0c";
  int n = 4;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_17) {
  char str1[9] = "abc";
  char str2[] = "de\0f";
  char str3[9] = "ab\0c";
  int n = 3;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_18) {
  char str1[9] = "";
  char str2[] = "def";
  char str3[9] = "";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_19) {
  char str1[9] = "";
  char str2[] = "";
  char str3[9] = "";
  int n = 1;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memcpy_20) {
  char str1[9] = " ";
  char str2[] = " ";
  char str3[9] = " ";
  int n = 0;
  ck_assert_str_eq(memcpy(str1, str2, n), s21_memcpy(str3, str2, n));
}
END_TEST

START_TEST(memset_1) {
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = '2';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_2) {
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = 'a';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_3) {
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = '2';
  int n = 5;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_4) {
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = 'a';
  int n = 5;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_5) {
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = '2';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_6) {
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = 'a';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_7) {
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = '2';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_8) {
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = 'a';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_9) {
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = '2';
  int n = 7;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_10) {
  char str1[] = "abcdefghij";
  char str2[] = "abcdefghij";
  int c = 'a';
  int n = 3;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_11) {
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = '2';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_12) {
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = 'a';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_13) {
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = '2';
  int n = 5;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_14) {
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = 'a';
  int n = 5;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_15) {
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = '2';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_16) {
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = 'a';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_17) {
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = '2';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_18) {
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = 'a';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_19) {
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = '2';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_20) {
  char str1[] = "1234567890";
  char str2[] = "1234567890";
  int c = 'a';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_21) {
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = '2';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_22) {
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = 'a';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_23) {
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = '2';
  int n = 5;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_24) {
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = 'a';
  int n = 5;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_25) {
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = '2';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_26) {
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = 'a';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_27) {
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = '2';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_28) {
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = 'a';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_29) {
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = '2';
  int n = 7;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_30) {
  char str1[] = "abcde67890";
  char str2[] = "abcde67890";
  int c = 'a';
  int n = 7;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_31) {
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = '2';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_32) {
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = 'a';
  int n = 10;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_33) {
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = '2';
  int n = 5;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_34) {
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = 'a';
  int n = 5;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_35) {
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = '2';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_36) {
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = 'a';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_37) {
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = '2';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_38) {
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = 'a';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_39) {
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = '2';
  int n = 11;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_40) {
  char str1[] = ")(*&^UTYfghjkliuy7oi6";
  char str2[] = ")(*&^UTYfghjkliuy7oi6";
  int c = 'a';
  int n = 11;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_41) {
  char str1[] = "";
  char str2[] = "";
  int c = 'a';
  int n = 0;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_42) {
  char str1[] = " ";
  char str2[] = " ";
  int c = 'a';
  int n = 1;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_43) {
  char str1[] = ")(*&^UTYfgh\0jkliuy7oi6";
  char str2[] = ")(*&^UTYfgh\0jkliuy7oi6";
  int c = 'a';
  int n = 11;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_44) {
  char str1[] = ")(*&^UTYfgh\njkliuy7oi6";
  char str2[] = ")(*&^UTYfgh\njkliuy7oi6";
  int c = 'a';
  int n = 11;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_45) {
  char str1[] = ")(*&^UTYfghjkliuy7oi6\0";
  char str2[] = ")(*&^UTYfghjkliuy7oi6\0";
  int c = 'a';
  int n = 11;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(memset_46) {
  char str1[] = "\0)(*&^UTYfgh\0jkliuy7oi6";
  char str2[] = "\0)(*&^UTYfgh\0jkliuy7oi6";
  int c = 'a';
  int n = 11;
  ck_assert_str_eq(memset(str1, c, n), s21_memset(str2, c, n));
}
END_TEST

START_TEST(strncat_1) {
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "def";
  int n = 1;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_2) {
  char str1[9] = "ab\nc";
  char str2[9] = "ab\nc";
  char str3[] = "def";
  int n = 1;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_3) {
  char str1[9] = "ab\0c";
  char str2[9] = "ab\0c";
  char str3[] = "def";
  int n = 1;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_4) {
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "de\0f";
  int n = 1;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_5) {
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "de\nf";
  int n = 1;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_6) {
  char str1[9] = "ab\0c";
  char str2[9] = "ab\0c";
  char str3[] = "def";
  int n = 4;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_7) {
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "de\0f";
  int n = 4;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_8) {
  char str1[9] = "";
  char str2[9] = "";
  char str3[] = "def";
  int n = 1;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_9) {
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "";
  int n = 1;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_10) {
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "def";
  int n = 3;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_11) {
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "def";
  int n = 3;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_12) {
  char str1[9] = "ab\nc";
  char str2[9] = "ab\nc";
  char str3[] = "def";
  int n = 3;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_13) {
  char str1[9] = "ab\0c";
  char str2[9] = "ab\0c";
  char str3[] = "def";
  int n = 0;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_14) {
  char str1[9] = "abc";
  char str2[9] = "abc";
  char str3[] = "de\0f";
  int n = 0;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strncat_20) {
  char str1[9] = " ";
  char str2[9] = " ";
  char str3[] = " ";
  int n = 0;
  ck_assert_str_eq(strncat(str1, str3, n), s21_strncat(str2, str3, n));
}
END_TEST

START_TEST(strchr_1) {
  char str1[] = "abc";
  int n = 'a';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_2) {
  char str1[] = "abc";
  int n = 'd';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_3) {
  char str1[] = "abc";
  int n = '1';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_4) {
  char str1[] = "abc";
  int n = '\\';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_5) {
  char str1[] = "";
  int n = 'a';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_6) {
  char str1[] = " ";
  int n = 'a';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_7) {
  char str1[] = " ";
  int n = ' ';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_8) {
  char str1[] = " ";
  int n = '\\';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_9) {
  char str1[] = "021";
  int n = '0';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_10) {
  char str1[] = "ab\nc";
  int n = 'a';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_11) {
  char str1[] = "ab\nc";
  int n = '\n';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_12) {
  char str1[] = "abc";
  int n = '\0';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_13) {
  char str1[] = "ab\0c";
  int n = 'a';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_14) {
  char str1[] = "ab\0c";
  int n = '\0';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_15) {
  char str1[] = "";
  int n = '\0';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_16) {
  char str1[] = "\0\0\0";
  int n = '\0';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_17) {
  char str1[] = " ";
  int n = '\\';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_18) {
  char str1[] = "";
  int n = '\\';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_19) {
  char str1[] = "ab,c";
  int n = ',';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_20) {
  char str1[] = "abcdefghijklmnopqrst";
  int n = 't';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strchr_21) {
  char str1[] = "abcdtefghijktlmnopqrst";
  int n = 't';
  ck_assert_ptr_eq(strchr(str1, n), s21_strchr(str1, n));
}
END_TEST

START_TEST(strncmp_1) {
  char str1[] = "abc";
  char str2[] = "abc";
  int n = 3;
  int s21 = s21_strncmp(str1, str2, n);
  int s00 = strncmp(str1, str2, n);
  ck_assert_int_eq(s21, s00);
}
END_TEST

START_TEST(strncpy_1) {
  char str1[9] = "abc";
  char str3[9] = "abc";
  ck_assert_str_eq(s21_strncpy(str3, "def", 4), strncpy(str1, "def", 4));
}
END_TEST

START_TEST(strncpy_2) {
  char str1[9] = "ab\nc";
  char str3[9] = "ab\nc";
  ck_assert_str_eq(s21_strncpy(str3, "def", 4), strncpy(str1, "def", 4));
}
END_TEST

START_TEST(strncpy_3) {
  char str1[9] = "ab\0c";
  char str3[9] = "ab\0c";
  ck_assert_str_eq(s21_strncpy(str3, "def", 4), strncpy(str1, "def", 4));
}
END_TEST

START_TEST(strncpy_4) {
  char str1[9] = "abc";
  char str2[] = "de\0f";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(s21_strncpy(str3, str2, n), strncpy(str1, str2, n));
}
END_TEST

START_TEST(strncpy_5) {
  char str1[9] = "abc";
  char str2[] = "de\nf";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_6) {
  char str1[9] = "ab\0c";
  char str2[] = "def";
  char str3[9] = "ab\0c";
  int n = 4;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_7) {
  char str1[9] = "abc";
  char str2[] = "de\0f";
  char str3[9] = "abc";
  int n = 4;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_8) {
  char str1[9] = "";
  char str2[] = "def";
  char str3[9] = "";
  int n = 3;
  strncpy(str1, str2, n);
  s21_strncpy(str3, str2, n);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strncpy_9) {
  char str1[9] = "abc";
  char str2[] = "";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_10) {
  char str1[9] = "abc";
  char str2[] = "def";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_11) {
  char str1[9] = "abc";
  char str2[] = "def";
  char str3[9] = "abc";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_12) {
  char str1[9] = "ab\nc";
  char str2[] = "def";
  char str3[9] = "ab\nc";
  int n = 9;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_13) {
  char str1[9] = "ab\0c";
  char str2[] = "def";
  char str3[9] = "ab\0c";
  int n = 0;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_14) {
  char str1[9] = "abc";
  char str2[] = "de\0f";
  char str3[9] = "abc";
  int n = 0;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_15) {
  char str1[9] = "abc";
  char str2[] = "de\nf";
  char str3[9] = "abc";
  int n = 7;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_16) {
  char str1[9] = "ab\0c";
  char str2[] = "def";
  char str3[9] = "ab\0c";
  int n = 4;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_17) {
  char str1[9] = "abc";
  char str2[] = "de\0f";
  char str3[9] = "abc";
  int n = 8;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_18) {
  char str1[9] = "";
  char str2[] = "def";
  char str3[9] = "";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_19) {
  char str1[9] = "";
  char str2[] = "";
  char str3[9] = "";
  int n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strncpy_20) {
  char str1[9] = " ";
  char str2[] = " ";
  char str3[9] = " ";
  int n = 0;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str3, str2, n));
}
END_TEST

START_TEST(strcspn_1) {
  char str1[] = "abc";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_2) {
  char str1[] = "Abc";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_3) {
  char str1[] = "abc";
  char str2[] = "Abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_4) {
  char str1[] = "abC";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_5) {
  char str1[] = "abc";
  char str2[] = "abC";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_6) {
  char str1[] = "ABC";
  char str2[] = "abc";
  ck_assert_int_eq(s21_strcspn(str1, str2), strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_7) {
  char str1[] = "abc";
  char str2[] = "ABC";
  ck_assert_int_eq(s21_strcspn(str1, str2), strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_8) {
  char str1[] = "a b c";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_9) {
  char str1[] = "abc";
  char str2[] = "a b c";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_10) {
  char str1[] = "";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_11) {
  char str1[] = "abc";
  char str2[] = "";
  ck_assert_int_eq(s21_strcspn(str1, str2), strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_12) {
  char str1[] = " ";
  char str2[] = "abc";
  ck_assert_int_eq(s21_strcspn(str1, str2), strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_13) {
  char str1[] = "abc";
  char str2[] = " ";
  ck_assert_int_eq(s21_strcspn(str1, str2), strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_14) {
  char str1[] = "9087";
  char str2[] = "657";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_15) {
  char str1[] = "";
  char str2[] = "";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_16) {
  char str1[] = " ";
  char str2[] = " ";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_17) {
  char str1[] = "abc ";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_18) {
  char str1[] = "abc";
  char str2[] = "abc ";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_19) {
  char str1[] = " abc";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_20) {
  char str1[] = "abc";
  char str2[] = " abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_21) {
  char str1[] = "123";
  char str2[] = "123";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_22) {
  char str1[] = "123";
  char str2[] = "321";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_23) {
  char str1[] = "321";
  char str2[] = "321";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_24) {
  char str1[] = "321";
  char str2[] = "123";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_25) {
  char str1[] = "1234";
  char str2[] = "123";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_26) {
  char str1[] = "132";
  char str2[] = "1234";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_27) {
  char str1[] = "abcd";
  char str2[] = "abc";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_28) {
  char str1[] = "abc";
  char str2[] = "abcd";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_29) {
  char str1[] = "12ab";
  char str2[] = "12ab";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_30) {
  char str1[] = "ab12";
  char str2[] = "12ab";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strlen_1) {
  char str1[] = "abcde";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_2) {
  char str1[] = "12345";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_3) {
  char str1[] = "00000";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_4) {
  char str1[] = ".....";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_5) {
  char str1[] = "   ";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_6) {
  char str1[] = "+_@$)@)(%*";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_7) {
  char str1[] = "\n";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_8) {
  char str1[] = " 0";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_9) {
  char str1[] = "0 ";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_10) {
  char str1[] = "j ";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_11) {
  char str1[] = " k";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_12) {
  char str1[] = "";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_13) {
  char str1[] = "!";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_14) {
  char str1[] = "\'";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_15) {
  char str1[] = "\0";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_16) {
  char str1[] = "k\0";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_17) {
  char str1[] = " \0";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_18) {
  char str1[] = "\0 0n";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_19) {
  char str1[] = "\n klj";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strlen_20) {
  char str1[] = "\n\0";
  ck_assert_int_eq(strlen(str1), s21_strlen(str1));
}
END_TEST

START_TEST(strpbrk_1) {
  char str1[] = "this is a test";
  char str2[] = "this";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_2) {
  char str1[] = "this is a test";
  char str2[] = "abc";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_3) {
  char str1[] = "abc";
  char str2[] = "ccc";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_4) {
  char str1[] = "abc123";
  char str2[] = "123";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_5) {
  char str1[] = "abglk1erw233c";
  char str2[] = "321";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_6) {
  char str1[] = "ab\nc";
  char str2[] = "\n";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_7) {
  char str1[] = "a8yuoiytu5u6rtyfkguhubc";
  char str2[] = "123i6t5";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_8) {
  char str1[] = "a77777bc";
  char str2[] = "177723";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_9) {
  char str1[] = "ab7itgkhm.,c";
  char str2[] = "12hjv3";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_10) {
  char str1[] = "ab.,c";
  char str2[] = "127863";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_11) {
  char str1[] = "abc";
  char str2[] = "";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_12) {
  char str1[] = " ";
  char str2[] = "abc";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_13) {
  char str1[] = "abc";
  char str2[] = " ";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_14) {
  char str1[] = "9087";
  char str2[] = "657";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_15) {
  char str1[] = "";
  char str2[] = "";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_16) {
  char str1[] = " ";
  char str2[] = " ";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_17) {
  char str1[] = "abc ";
  char str2[] = "abc";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_18) {
  char str1[] = "abc";
  char str2[] = "abc ";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_19) {
  char str1[] = " abc";
  char str2[] = "abc";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_20) {
  char str1[] = "abc";
  char str2[] = " abc";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_21) {
  char str1[] = "123";
  char str2[] = "123";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_22) {
  char str1[] = "123";
  char str2[] = "321";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_23) {
  char str1[] = "321";
  char str2[] = "321";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_24) {
  char str1[] = "321";
  char str2[] = "123";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_25) {
  char str1[] = "1234";
  char str2[] = "123";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_26) {
  char str1[] = "132";
  char str2[] = "1234";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_27) {
  char str1[] = "abcd";
  char str2[] = "abc";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_28) {
  char str1[] = "abc";
  char str2[] = "abcd";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_29) {
  char str1[] = "12ab";
  char str2[] = "12ab";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_30) {
  char str1[] = "ab12";
  char str2[] = "12ab";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_31) {
  char str1[] = "abc";
  char str2[] = "";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_32) {
  char str1[] = " ";
  char str2[] = "abc";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_33) {
  char str1[] = "abc";
  char str2[] = " ";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_34) {
  char str1[] = "9087";
  char str2[] = "657";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_35) {
  char str1[] = "";
  char str2[] = "";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_36) {
  char str1[] = " ";
  char str2[] = " ";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_37) {
  char str1[] = "abc ";
  char str2[] = "abc";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_38) {
  char str1[] = "abc";
  char str2[] = "abc ";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_39) {
  char str1[] = " abc";
  char str2[] = "abc";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_40) {
  char str1[] = "abc";
  char str2[] = " abc";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(strrchr_1) {
  char str1[] = "abc";
  int n = 'a';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_2) {
  char str1[] = "abc";
  int n = 'd';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_3) {
  char str1[] = "abc";
  int n = '1';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_4) {
  char str1[] = "abc";
  int n = '\\';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_5) {
  char str1[] = "";
  int n = 'a';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_6) {
  char str1[] = " ";
  int n = 'a';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_7) {
  char str1[] = " ";
  int n = ' ';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_8) {
  char str1[] = " ";
  int n = '\\';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_9) {
  char str1[] = "021";
  int n = '0';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_10) {
  char str1[] = "ab\nc";
  int n = 'a';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_11) {
  char str1[] = "ab\nc";
  int n = '\n';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_12) {
  char str1[] = "abc";
  int n = '\0';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_13) {
  char str1[] = "ab\0c";
  int n = 'a';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_14) {
  char str1[] = "ab\0c";
  int n = '\0';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_15) {
  char str1[] = "";
  int n = '\0';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_16) {
  char str1[] = "\0\0\0";
  int n = '\0';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_17) {
  char str1[] = " ";
  int n = 92;
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_18) {
  char str1[] = "";
  int n = 92;
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_19) {
  char str1[] = "ab,c";
  int n = ',';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strrchr_20) {
  char str1[] = "abcdefghijklmnopqrst";
  int n = 't';
  ck_assert_ptr_eq(s21_strrchr(str1, n), strrchr(str1, n));
}
END_TEST

START_TEST(strstr_1) {
  char str1[] = "abc";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_2) {
  char str1[] = "Abc";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_3) {
  char str1[] = "abc";
  char str2[] = "Abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_4) {
  char str1[] = "abC";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_5) {
  char str1[] = "abc";
  char str2[] = "abC";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_6) {
  char str1[] = "ABC";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_7) {
  char str1[] = "abc";
  char str2[] = "ABC";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_8) {
  char str1[] = "a b c";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_9) {
  char str1[] = "abc";
  char str2[] = "a b c";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_10) {
  char str1[] = "";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_11) {
  char str1[] = "abc";
  char str2[] = "";
  ck_assert_ptr_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST

START_TEST(strstr_12) {
  char str1[] = " ";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_13) {
  char str1[] = "abc";
  char str2[] = " ";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_14) {
  char str1[] = "9087";
  char str2[] = "657";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_15) {
  char str1[] = "";
  char str2[] = "";
  ck_assert_ptr_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST

START_TEST(strstr_16) {
  char str1[] = " ";
  char str2[] = " ";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_17) {
  char str1[] = "abc ";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_18) {
  char str1[] = "abc";
  char str2[] = "abc ";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_19) {
  char str1[] = " abc";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_20) {
  char str1[] = "abc";
  char str2[] = " abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_21) {
  char str1[] = "123";
  char str2[] = "123";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_22) {
  char str1[] = "123";
  char str2[] = "321";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_23) {
  char str1[] = "321";
  char str2[] = "321";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_24) {
  char str1[] = "321";
  char str2[] = "123";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_25) {
  char str1[] = "1234";
  char str2[] = "123";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_26) {
  char str1[] = "132";
  char str2[] = "1234";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_27) {
  char str1[] = "abcd";
  char str2[] = "abc";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_28) {
  char str1[] = "abc";
  char str2[] = "abcd";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_29) {
  char str1[] = "12ab";
  char str2[] = "12ab";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_30) {
  char str1[] = "ab12";
  char str2[] = "12ab";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_31) {
  char str1[] = "a\0b12";
  char str2[] = "12ab";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_32) {
  char str1[] = "ab12";
  char str2[] = "12\0ab";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_33) {
  char str1[] = "ab\012";
  char str2[] = "1\02ab";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_34) {
  char str1[] = "\0";
  char str2[] = "\0";
  ck_assert_ptr_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST

START_TEST(strstr_35) {
  char str1[] = "\0";
  char str2[] = "1\02ab";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_36) {
  char str1[] = "";
  char str2[] = "1\02ab";
  ck_assert_ptr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strtok_1) {
  char str1[] = "abc";
  char str3[] = "abc";
  char str2[] = "c";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_2) {
  char str1[] = "abc";
  char str3[] = "abc";
  char str2[] = "b";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_3) {
  char str1[] = "abc";
  char str3[] = "abc";
  char str2[] = "a";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_4) {
  char str1[] = "abb";
  char str3[] = "abb";
  char str2[] = "b";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_5) {
  char str1[] = "bbc";
  char str3[] = "bbc";
  char str2[] = "b";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_6) {
  char str1[] = "aaabbcc";
  char str3[] = "aaabbcc";
  char str2[] = "c";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_7) {
  char str1[] = "aaabbcc";
  char str3[] = "aaabbcc";
  char str2[] = "b";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_8) {
  char str1[] = "abc";
  char str3[] = "abc";
  char str2[] = "d";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_9) {
  char str1[] = "123";
  char str3[] = "123";
  char str2[] = "3";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_10) {
  char str1[] = "123";
  char str3[] = "123";
  char str2[] = "2";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_11) {
  char str1[] = "123";
  char str3[] = "123";
  char str2[] = "1";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_12) {
  char str1[] = "123";
  char str3[] = "123";
  char str2[] = "4";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_13) {
  char str1[] = "1123";
  char str3[] = "1123";
  char str2[] = "2";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_14) {
  char str1[] = "1223";
  char str3[] = "1223";
  char str2[] = "2";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_15) {
  char str1[] = "1\023";
  char str3[] = "1\023";
  char str2[] = "2";
  ck_assert_str_eq(strtok(str1, str2), s21_strtok(str3, str2));
}
END_TEST

START_TEST(strtok_16) {
  char str1[] = "1\023";
  char str3[] = "1\023";
  char str2[] = "2";
  strtok(str1, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strtok_17) {
  char str1[] = "ababa";
  char str3[] = "ababa";
  char str2[] = "b";
  strtok(str1, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strtok_18) {
  char str1[] = "ababa";
  char str3[] = "ababa";
  char str2[] = "a";
  strtok(str1, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strtok_19) {
  char str1[] = "ababa";
  char str3[] = "ababa";
  char str2[] = "a";
  strtok(str1, str2);
  strtok(NULL, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strtok_20) {
  char str1[] = "ababa";
  char str3[] = "ababa";
  char str2[] = "a";
  strtok(str1, str2);
  char *str4 = strtok(NULL, str2);
  s21_strtok(str3, str2);
  char *str5 = s21_strtok(NULL, str2);
  ck_assert_str_eq(str4, str5);
}
END_TEST

START_TEST(strtok_21) {
  char str1[] = "ababa";
  char str3[] = "ababa";
  char str2[] = "a";
  strtok(str1, str2);
  char *str4 = strtok(NULL, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  char *str5 = s21_strtok(NULL, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str4, str5);
}
END_TEST

START_TEST(strtok_22) {
  char str1[] = "abababa";
  char str3[] = "abababa";
  char str2[] = "a";
  strtok(str1, str2);
  strtok(NULL, str2);
  char *str4 = strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  char *str5 = s21_strtok(NULL, str2);
  ck_assert_str_eq(str4, str5);
}
END_TEST

START_TEST(strtok_23) {
  char str1[] = "abababa";
  char str3[] = "abababa";
  char str2[] = "b";
  strtok(str1, str2);
  strtok(NULL, str2);
  char *str4 = strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  char *str5 = s21_strtok(NULL, str2);
  ck_assert_str_eq(str4, str5);
}
END_TEST

START_TEST(strtok_24) {
  char str1[] = "abababa";
  char str3[] = "abababa";
  char str2[] = "c";
  strtok(str1, str2);
  strtok(NULL, str2);
  char *str4 = strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  char *str5 = s21_strtok(NULL, str2);
  ck_assert_ptr_eq(str4, str5);
}
END_TEST

START_TEST(strtok_25) {
  char str1[] = "ababnnabaaaaa";
  char str3[] = "ababnnabaaaaa";
  char str2[] = "a";
  strtok(str1, str2);
  strtok(NULL, str2);
  char *str4 = strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  char *str5 = s21_strtok(NULL, str2);
  ck_assert_str_eq(str4, str5);
}
END_TEST

START_TEST(strtok_26) {
  char str1[] = "ababnnabaaaaa";
  char str3[] = "ababnnabaaaaa";
  char str2[] = "n";
  strtok(str1, str2);
  char *str4 = strtok(NULL, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  char *str5 = s21_strtok(NULL, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str4, str5);
}
END_TEST

START_TEST(strtok_27) {
  char str1[] = "0987654546789";
  char str3[] = "0987654546789";
  char str2[] = "5";
  strtok(str1, str2);
  strtok(NULL, str2);
  char *str4 = strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  char *str5 = s21_strtok(NULL, str2);
  ck_assert_str_eq(str4, str5);
}
END_TEST

START_TEST(strtok_28) {
  char str1[] = "ababnnabaaaaa";
  char str3[] = "ababnnabaaaaa";
  char str2[] = "n";
  strtok(str1, str2);
  strtok(NULL, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strtok_29) {
  char str1[] = "aaaaaabnnabaaaaa";
  char str3[] = "aaaaaabnnabaaaaa";
  char str2[] = "a";
  strtok(str1, str2);
  strtok(NULL, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strtok_30) {
  char str1[] = "bnnabaaaaa";
  char str3[] = "bnnabaaaaa";
  char str2[] = "a";
  strtok(str1, str2);
  strtok(NULL, str2);
  strtok(NULL, str2);
  s21_strtok(str3, str2);
  s21_strtok(NULL, str2);
  s21_strtok(NULL, str2);
  ck_assert_str_eq(str1, str3);
}
END_TEST

START_TEST(strerror_0_1) {
  int i = 5000;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_0) {
  int i = 0;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_1) {
  int i = 1;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_2) {
  // 4003
  int i = 2;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_3) {
  // 4007
  int i = 3;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_4) {
  // 4011
  int i = 4;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_5) {
  // 4015
  int i = 5;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_6) {
  // 4019
  int i = 6;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_7) {
  // 4023
  int i = 7;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_8) {
  // 4027
  int i = 8;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_9) {
  // 4031
  int i = 9;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_10) {
  // 4035
  int i = 10;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_11) {
  // 4039
  int i = 11;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_12) {
  // 4043
  int i = 12;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_13) {
  // 4047
  int i = 13;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_14) {
  // 4051
  int i = 14;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_15) {
  // 4055
  int i = 15;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_16) {
  // 4059
  int i = 16;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_17) {
  // 4063
  int i = 17;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_18) {
  // 4067
  int i = 18;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_19) {
  // 4071
  int i = 19;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_20) {
  // 4075
  int i = 20;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_21) {
  // 4079
  int i = 21;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_22) {
  // 4083
  int i = 22;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_23) {
  // 4087
  int i = 23;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_24) {
  // 4091
  int i = 24;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_25) {
  // 4095
  int i = 25;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_26) {
  // 4099
  int i = 26;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_27) {
  // 4103
  int i = 27;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_28) {
  // 4107
  int i = 28;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_29) {
  // 4111
  int i = 29;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_30) {
  // 4115
  int i = 30;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_31) {
  // 4119
  int i = 31;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_32) {
  // 4123
  int i = 32;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_33) {
  // 4127
  int i = 33;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_34) {
  // 4131
  int i = 34;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_35) {
  // 4135
  int i = 35;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_36) {
  // 4139
  int i = 36;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_37) {
  // 4143
  int i = 37;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_38) {
  // 4147
  int i = 38;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_39) {
  // 4151
  int i = 39;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_40) {
  // 4155
  int i = 40;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_41) {
  // 4159
  int i = 41;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_42) {
  // 4163
  int i = 42;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_43) {
  // 4167
  int i = 43;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_44) {
  // 4171
  int i = 44;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_45) {
  // 4175
  int i = 45;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_46) {
  // 4179
  int i = 46;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_47) {
  // 4183
  int i = 47;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_48) {
  // 4187
  int i = 48;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_49) {
  // 4191
  int i = 49;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_50) {
  // 4195
  int i = 50;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_51) {
  // 4199
  int i = 51;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_52) {
  // 4203
  int i = 52;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_53) {
  // 4207
  int i = 53;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_54) {
  // 4211
  int i = 54;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_55) {
  // 4215
  int i = 55;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_56) {
  // 4219
  int i = 56;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_57) {
  // 4223
  int i = 57;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_58) {
  // 4227
  int i = 58;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_59) {
  // 4231
  int i = 59;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_60) {
  // 4235
  int i = 60;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_61) {
  // 4239
  int i = 61;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_62) {
  // 4243
  int i = 62;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_63) {
  // 4247
  int i = 63;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_64) {
  // 4251
  int i = 64;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_65) {
  // 4255
  int i = 65;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_66) {
  // 4259
  int i = 66;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_67) {
  // 4263
  int i = 67;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_68) {
  // 4267
  int i = 68;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_69) {
  // 4271
  int i = 69;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_70) {
  // 4275
  int i = 70;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_71) {
  // 4279
  int i = 71;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_72) {
  // 4283
  int i = 72;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_73) {
  // 4287
  int i = 73;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_74) {
  // 4291
  int i = 74;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_75) {
  // 4295
  int i = 75;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_76) {
  // 4299
  int i = 76;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_77) {
  // 4303
  int i = 77;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_78) {
  // 4307
  int i = 78;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_79) {
  // 4311
  int i = 79;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_80) {
  // 4315
  int i = 80;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_81) {
  // 4319
  int i = 81;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_82) {
  // 4323
  int i = 82;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_83) {
  // 4327
  int i = 83;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_84) {
  // 4331
  int i = 84;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_85) {
  // 4335
  int i = 85;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_86) {
  // 4339
  int i = 86;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_87) {
  // 4343
  int i = 87;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_88) {
  // 4347
  int i = 88;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_89) {
  // 4351
  int i = 89;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_90) {
  // 4355
  int i = 90;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_91) {
  // 4359
  int i = 91;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_92) {
  // 4363
  int i = 92;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_93) {
  // 4367
  int i = 93;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_94) {
  // 4371
  int i = 94;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_95) {
  // 4375
  int i = 95;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_96) {
  // 4379
  int i = 96;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_97) {
  // 4383
  int i = 97;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_98) {
  // 4387
  int i = 98;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_99) {
  // 4391
  int i = 99;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_100) {
  // 4395
  int i = 100;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_101) {
  // 4399
  int i = 101;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_102) {
  // 4403
  int i = 102;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_103) {
  // 4407
  int i = 103;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_104) {
  // 4411
  int i = 104;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_105) {
  // 4415
  int i = 105;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_106) {
  // 4419
  int i = 106;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_107) {
  // 4423
  int i = 107;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_108) {
  // 4427
  int i = 108;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(strerror_109) {
  int i = 109;
  ck_assert_str_eq(strerror(i), s21_strerror(i));
}
END_TEST

START_TEST(sprintf_1_int) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  int a = s21_sprintf(s21, "%d", 1324);
  int b = sprintf(s, "%d", 1324);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_1_buffer_int) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  s21_sprintf(s21, "%d", 1324);
  sprintf(s, "%d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_2_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-d", 1324), sprintf(s, "%-d", 1324));
}
END_TEST

START_TEST(sprintf_2_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-d", 1324);
  sprintf(s, "%-d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_3_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%+d", 1324), sprintf(s, "%+d", 1324));
}
END_TEST

START_TEST(sprintf_3_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%+d", 1324);
  sprintf(s, "%+d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_4_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "% d", 1324), sprintf(s, "% d", 1324));
}
END_TEST

START_TEST(sprintf_4_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "% d", 1324);
  sprintf(s, "% d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_5_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%d", -1324), sprintf(s, "%d", -1324));
}
END_TEST

START_TEST(sprintf_5_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%d", -1324);
  sprintf(s, "%d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_6_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-d", -1324), sprintf(s, "%-d", -1324));
}
END_TEST

START_TEST(sprintf_6_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-d", -1324);
  sprintf(s, "%-d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_7_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%+d", -1324), sprintf(s, "%+d", -1324));
}
END_TEST

START_TEST(sprintf_7_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%+d", -1324);
  sprintf(s, "%+d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_8_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "% d", -1324), sprintf(s, "% d", -1324));
}
END_TEST

START_TEST(sprintf_8_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "% d", -1324);
  sprintf(s, "% d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_9_int) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  int a = s21_sprintf(s21, "Hello world");
  int b = sprintf(s, "Hello world");
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_9_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "Hello world");
  sprintf(s, "Hello world");
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_10_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%%Hello %% world"),
                   sprintf(s, "%%Hello %% world"));
}
END_TEST

START_TEST(sprintf_10_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%%Hello %% world");
  sprintf(s, "%%Hello %% world");
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_11_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%1d", 1324), sprintf(s, "%1d", 1324));
}
END_TEST

START_TEST(sprintf_11_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%1d", 1324);
  sprintf(s, "%1d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_12_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%1d", -1324), sprintf(s, "%1d", -1324));
}
END_TEST

START_TEST(sprintf_12_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%1d", -1324);
  sprintf(s, "%1d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_13_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%3d", 1324), sprintf(s, "%3d", 1324));
}
END_TEST

START_TEST(sprintf_13_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%3d", 1324);
  sprintf(s, "%3d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_14_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%4d", -1324), sprintf(s, "%4d", -1324));
}
END_TEST

START_TEST(sprintf_14_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%4d", -1324);
  sprintf(s, "%4d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_15_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%5d", -1324), sprintf(s, "%5d", -1324));
}
END_TEST

START_TEST(sprintf_15_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%5d", -1324);
  sprintf(s, "%5d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_16_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%5d", 1324), sprintf(s, "%5d", 1324));
}
END_TEST

START_TEST(sprintf_16_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%5d", 1324);
  sprintf(s, "%5d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_17_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%7d", -1324), sprintf(s, "%7d", -1324));
}
END_TEST

START_TEST(sprintf_17_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%7d", -1324);
  sprintf(s, "%7d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_18_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%7d", 1324), sprintf(s, "%7d", 1324));
}
END_TEST

START_TEST(sprintf_18_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%7d", 1324);
  sprintf(s, "%7d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_19_int) {
  char s[10000];
  char s21[10000];
  ck_assert_int_eq(s21_sprintf(s21, "%1000d", 1324),
                   sprintf(s, "%1000d", 1324));
}
END_TEST

START_TEST(sprintf_19_buffer_int) {
  char s[10000];
  char s21[10000];
  s21_sprintf(s21, "%1000d", 1324);
  sprintf(s, "%1000d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_20_int) {
  char s[50000] = {'\0'};
  char s21[50000] = {'\0'};
  int a = s21_sprintf(s21, "%500d", -1324);
  int b = sprintf(s, "%500d", -1324);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_20_buffer_int) {
  char s[10000];
  char s21[10000];
  s21_sprintf(s21, "%500d", -1324);
  sprintf(s, "%500d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_21_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-1d", 1324), sprintf(s, "%-1d", 1324));
}
END_TEST

START_TEST(sprintf_21_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-1d", 1324);
  sprintf(s, "%-1d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_22_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-1d", -1324), sprintf(s, "%-1d", -1324));
}
END_TEST

START_TEST(sprintf_22_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-1d", -1324);
  sprintf(s, "%-1d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_23_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-3d", 1324), sprintf(s, "%-3d", 1324));
}
END_TEST

START_TEST(sprintf_23_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-3d", 1324);
  sprintf(s, "%-3d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_24_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-4d", -1324), sprintf(s, "%-4d", -1324));
}
END_TEST

START_TEST(sprintf_24_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-4d", -1324);
  sprintf(s, "%-4d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_25_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-5d", -1324), sprintf(s, "%-5d", -1324));
}
END_TEST

START_TEST(sprintf_25_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-5d", -1324);
  sprintf(s, "%-5d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_26_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-5d", 1324), sprintf(s, "%-5d", 1324));
}
END_TEST

START_TEST(sprintf_26_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-5d", 1324);
  sprintf(s, "%-5d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_27_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-7d", -1324), sprintf(s, "%-7d", -1324));
}
END_TEST

START_TEST(sprintf_27_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-7d", -1324);
  sprintf(s, "%-7d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_28_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-7d", 1324), sprintf(s, "%-7d", 1324));
}
END_TEST

START_TEST(sprintf_28_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-7d", 1324);
  sprintf(s, "%-7d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_29_int) {
  char s[50000] = {'\0'};
  char s21[50000] = {'\0'};
  int a = s21_sprintf(s21, "%-1000d", 1324);
  int b = sprintf(s, "%-1000d", 1324);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_29_buffer_int) {
  char s[10000];
  char s21[10000];
  s21_sprintf(s21, "%-1000d", 1324);
  sprintf(s, "%-1000d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_30_int) {
  char s[50000] = {'\0'};
  char s21[50000] = {'\0'};
  int a = s21_sprintf(s21, "%-500d", -1324);
  int b = sprintf(s, "%-500d", -1324);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_30_buffer_int) {
  char s[10000];
  char s21[10000];
  s21_sprintf(s21, "%-500d", -1324);
  sprintf(s, "%-500d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_31_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-+1d", 1324), sprintf(s, "%-+1d", 1324));
}
END_TEST

START_TEST(sprintf_31_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-+1d", 1324);
  sprintf(s, "%-+1d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_32_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-+1d", -1324),
                   sprintf(s, "%-+1d", -1324));
}
END_TEST

START_TEST(sprintf_32_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-+1d", -1324);
  sprintf(s, "%-+1d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_33_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%- 3d", 1324), sprintf(s, "%- 3d", 1324));
}
END_TEST

START_TEST(sprintf_33_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%- 3d", 1324);
  sprintf(s, "%- 3d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_34_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%- 4d", -1324),
                   sprintf(s, "%- 4d", -1324));
}
END_TEST

START_TEST(sprintf_34_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%- 4d", -1324);
  sprintf(s, "%- 4d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_35_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-5ld", -1324), sprintf(s, "%-5d", -1324));
}
END_TEST

START_TEST(sprintf_35_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-5ld", -1324);
  sprintf(s, "%-5d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_36_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-5d", 1324), sprintf(s, "%-5d", 1324));
}
END_TEST

START_TEST(sprintf_36_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-5d", 1324);
  sprintf(s, "%-5d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_37_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%- 7d", -1324),
                   sprintf(s, "%- 7d", -1324));
}
END_TEST

START_TEST(sprintf_37_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%- 7d", -1324);
  sprintf(s, "%- 7d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_38_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%- 7ld", 1324), sprintf(s, "%- 7d", 1324));
}
END_TEST

START_TEST(sprintf_38_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%- 7ld", 1324);
  sprintf(s, "%- 7d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_39_int) {
  char s[50000] = {'\0'};
  char s21[50000] = {'\0'};
  int a = s21_sprintf(s21, "%- 1000d", 1324);
  int b = sprintf(s, "%- 1000d", 1324);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_39_buffer_int) {
  char s[10000];
  char s21[10000];
  s21_sprintf(s21, "%- 1000d", 1324);
  sprintf(s, "%- 1000d", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_40_int) {
  char s[50000] = {'\0'};
  char s21[50000] = {'\0'};
  int a = s21_sprintf(s21, "%+500d", -1324);
  int b = sprintf(s, "%+500d", -1324);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_40_buffer_int) {
  char s[10000];
  char s21[10000];
  s21_sprintf(s21, "%+500d", -1324);
  sprintf(s, "%+500d", -1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_41_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-+1d Hello %d", 1324, -1),
                   sprintf(s, "%-+1d Hello %d", 1324, -1));
}
END_TEST

START_TEST(sprintf_41_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-+1d Hello %d", 1324, -1);
  sprintf(s, "%-+1d Hello %d", 1324, -1);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_42_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "Hello %-+1d World % d", -1324, 1),
                   sprintf(s, "Hello %-+1d World % d", -1324, 1));
}
END_TEST

START_TEST(sprintf_42_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "Hello %-+1d World % d", -1324, 1);
  sprintf(s, "Hello %-+1d World % d", -1324, 1);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_43_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%- 3d Hello %d %+10d", 1324, 1000, 5),
                   sprintf(s, "%- 3d Hello %d %+10d", 1324, 1000, 5));
}
END_TEST

START_TEST(sprintf_43_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%- 3d Hello %d %+10d", 1324, 1000, 5);
  sprintf(s, "%- 3d Hello %d %+10d", 1324, 1000, 5);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_44_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%- 4ld", -1), sprintf(s, "%- 4d", -1));
}
END_TEST

START_TEST(sprintf_44_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%- 4ld", -1);
  sprintf(s, "%- 4d", -1);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_45_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "Hello %-5ld world % 10d", -1324, 555),
                   sprintf(s, "Hello %-5d world % 10d", -1324, 555));
}
END_TEST

START_TEST(sprintf_45_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "Hello %-5ld world % 10d", -1324, 555);
  sprintf(s, "Hello %-5d world % 10d", -1324, 555);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_46_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "Hello %% %-5d %%", 1324),
                   sprintf(s, "Hello %% %-5d %%", 1324));
}
END_TEST

START_TEST(sprintf_46_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "Hello %% %-5d %%", 1324);
  sprintf(s, "Hello %% %-5d %%", 1324);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_47_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%% %-+20d Hello World %- 7d", -1324, 5),
                   sprintf(s, "%% %-+20d Hello World %- 7d", -1324, 5));
}
END_TEST

START_TEST(sprintf_47_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%% %-+20d Hello World %- 7d", -1324, 5);
  sprintf(s, "%% %-+20d Hello World %- 7d", -1324, 5);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_48_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%- 7ld %% He%-1dllo %% W %d", 1324, 0, 10),
                   sprintf(s, "%- 7d %% He%-1dllo %% W %d", 1324, 0, 10));
}
END_TEST

START_TEST(sprintf_48_buffer_int) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%- 7ld %% He%-1dllo %% W %d", 1324, 0, 10);
  sprintf(s, "%- 7d %% He%-1dllo %% W %d", 1324, 0, 10);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_49_int) {
  char s[50000] = {'\0'};
  char s21[50000] = {'\0'};
  int a = s21_sprintf(s21, "Hello %- 1000d %% World %+d %- 5d", 1324, 1234, 0);
  int b = sprintf(s, "Hello %- 1000d %% World %+d %- 5d", 1324, 1234, 0);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_49_buffer_int) {
  char s[10000];
  char s21[10000];
  s21_sprintf(s21, "Hello %- 1000d %% World %+d %- 5d", 1324, 1234, 0);
  sprintf(s, "Hello %- 1000d %% World %+d %- 5d", 1324, 1234, 0);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_50_int) {
  char s[10000];
  char s21[10000];
  ck_assert_int_eq(s21_sprintf(s21, "% d%-d%+d", -1324, 0, 9),
                   sprintf(s, "% d%-d%+d", -1324, 0, 9));
}
END_TEST

START_TEST(sprintf_50_buffer_int) {
  char s[10000];
  char s21[10000];
  s21_sprintf(s21, "% d%-d%+d", -1324, 0, 9);
  sprintf(s, "% d%-d%+d", -1324, 0, 9);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_1_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  int a = s21_sprintf(s21, "%c", '1');
  int b = sprintf(s, "%c", '1');
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_1_buffer_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  s21_sprintf(s21, "%c", '1');
  sprintf(s, "%c", '1');
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_2_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  int a = s21_sprintf(s21, "%c%c", '1', '2');
  int b = sprintf(s, "%c%c", '1', '2');
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_2_buffer_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  s21_sprintf(s21, "%c%c", '1', '2');
  sprintf(s, "%c%c", '1', '2');
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_3_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  int a = s21_sprintf(s21, "%c%c%%%c", '1', '2', 'a');
  int b = sprintf(s, "%c%c%%%c", '1', '2', 'a');
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_3_buffer_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  s21_sprintf(s21, "%c%c%%%c", '1', '2', 'a');
  sprintf(s, "%c%c%%%c", '1', '2', 'a');
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_4_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  int a = s21_sprintf(s21, "Hello %c World %c", 'Q', '2');
  int b = sprintf(s, "Hello %c World %c", 'Q', '2');
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_4_buffer_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  s21_sprintf(s21, "Hello %c World %c", 'Q', '2');
  sprintf(s, "Hello %c World %c", 'Q', '2');
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_5_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  int a = s21_sprintf(s21, "Hello %5c World %-5c", 'Q', '2');
  int b = sprintf(s, "Hello %5c World %-5c", 'Q', '2');
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_5_buffer_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  s21_sprintf(s21, "Hello %5c World %-5c", 'Q', '2');
  sprintf(s, "Hello %5c World %-5c", 'Q', '2');
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_6_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  int a = s21_sprintf(s21, "Hello %1c World %-10c %% QWERTY", 'Q', '2');
  int b = sprintf(s, "Hello %1c World %-10c %% QWERTY", 'Q', '2');
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_6_buffer_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  s21_sprintf(s21, "Hello %1c World %-10c %% QWERTY", 'Q', '2');
  sprintf(s, "Hello %1c World %-10c %% QWERTY", 'Q', '2');
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_7_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  int a = s21_sprintf(s21, "%-1cHello %-100c World", 'Q', '2');
  int b = sprintf(s, "%-1cHello %-100c World", 'Q', '2');
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_7_buffer_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  s21_sprintf(s21, "%-1cHello %-100c World", 'Q', '2');
  sprintf(s, "%-1cHello %-100c World", 'Q', '2');
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_8_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  int a = s21_sprintf(s21, "%-2c", '2');
  int b = sprintf(s, "%-2c", '2');
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_8_buffer_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  s21_sprintf(s21, "%-2c", '2');
  sprintf(s, "%-2c", '2');
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_9_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  int a = s21_sprintf(s21, "%% %-56c %% %12c", '2', ' ');
  int b = sprintf(s, "%% %-56c %% %12c", '2', ' ');
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_9_buffer_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  s21_sprintf(s21, "%% %-56c %% %12c", '2', ' ');
  sprintf(s, "%% %-56c %% %12c", '2', ' ');
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_10_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  int a = s21_sprintf(s21, "%% %-56lc %% %12lc", '2', ' ');
  int b = sprintf(s, "%% %-56lc %% %12lc", '2', ' ');
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_10_buffer_char) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  s21_sprintf(s21, "%% %-56lc %% %12lc", '2', ' ');
  sprintf(s, "%% %-56lc %% %12lc", '2', ' ');
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_8_string) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  int a = s21_sprintf(s21, "AAA%-10sBVC", "AbcdEfg");
  int b = sprintf(s, "AAA%-10sBVC", "AbcdEfg");
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_9_string) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  int a = s21_sprintf(s21, "AAA%-10sBVC %% AAA %s", "AbcdEfg", "0987654321");
  int b = sprintf(s, "AAA%-10sBVC %% AAA %s", "AbcdEfg", "0987654321");
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_1_buffer_float) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  s21_sprintf(s21, "%f", 1324.12);
  sprintf(s, "%lf", 1324.12);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_2_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-f", 1324.123),
                   sprintf(s, "%-lf", 1324.123));
}
END_TEST

START_TEST(sprintf_2_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-f", 1324.123);
  sprintf(s, "%-lf", 1324.123);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_3_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%+f", 1324.12),
                   sprintf(s, "%+lf", 1324.12));
}
END_TEST

START_TEST(sprintf_3_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%+f", 1324.12);
  sprintf(s, "%+lf", 1324.12);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_4_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "% f", 1324.123),
                   sprintf(s, "% lf", 1324.123));
}
END_TEST

START_TEST(sprintf_4_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "% f", 1324.123);
  sprintf(s, "% lf", 1324.123);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_5_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%f", -1324.0), sprintf(s, "%lf", -1324.0));
}
END_TEST

START_TEST(sprintf_5_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%f", -1324.0);
  sprintf(s, "%lf", -1324.0);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_6_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-f", -1324.999999),
                   sprintf(s, "%-lf", -1324.999999));
}
END_TEST

START_TEST(sprintf_6_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-f", -1324.999999);
  sprintf(s, "%-lf", -1324.999999);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_7_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%+f", -1324.999999),
                   sprintf(s, "%+f", -1324.999999));
}
END_TEST

START_TEST(sprintf_7_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%+f", -1324.999999);
  sprintf(s, "%+f", -1324.999999);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_8_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "% f", -1324.12),
                   sprintf(s, "% f", -1324.12));
}
END_TEST

START_TEST(sprintf_8_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "% f", -1324.12);
  sprintf(s, "% f", -1324.12);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_9_float) {
  char s[5000] = {'\0'};
  char s21[5000] = {'\0'};
  int a = s21_sprintf(s21, "Hello world");
  int b = sprintf(s, "Hello world");
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_9_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "Hello world");
  sprintf(s, "Hello world");
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_10_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%%Hello %% world"),
                   sprintf(s, "%%Hello %% world"));
}
END_TEST

START_TEST(sprintf_10_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%%Hello %% world");
  sprintf(s, "%%Hello %% world");
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_11_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%1.1f", 1324.12),
                   sprintf(s, "%1.1f", 1324.12));
}
END_TEST

START_TEST(sprintf_11_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%1.1f", 1324.12);
  sprintf(s, "%1.1f", 1324.12);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_12_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%1.1f", -1324.12),
                   sprintf(s, "%1.1f", -1324.12));
}
END_TEST

START_TEST(sprintf_12_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%1.1f", -1324.12);
  sprintf(s, "%1.1f", -1324.12);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_13_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%3.3f", 1324.12),
                   sprintf(s, "%3.3lf", 1324.12));
}
END_TEST

START_TEST(sprintf_13_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%3.3f", 1324.12);
  sprintf(s, "%3.3lf", 1324.12);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_14_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%4.5f", -1324.099991),
                   sprintf(s, "%4.5f", -1324.099991));
}
END_TEST

START_TEST(sprintf_14_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%4.5f", -1324.099991);
  sprintf(s, "%4.5f", -1324.099991);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_15_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%5.6f", -1324.099991),
                   sprintf(s, "%5.6f", -1324.099991));
}
END_TEST

START_TEST(sprintf_15_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%5.6f", -1324.099991);
  sprintf(s, "%5.6f", -1324.099991);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_16_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%5.1f", 1324.99),
                   sprintf(s, "%5.1f", 1324.99));
}
END_TEST

START_TEST(sprintf_16_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%5.1f", 1324.99);
  sprintf(s, "%5.1f", 1324.99);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_17_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%7.2f", -1324.95),
                   sprintf(s, "%7.2f", -1324.95));
}
END_TEST

START_TEST(sprintf_17_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%7.2f", -1324.95);
  sprintf(s, "%7.2f", -1324.95);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_18_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%7.8f", 1324.5),
                   sprintf(s, "%7.8f", 1324.5));
}
END_TEST

START_TEST(sprintf_18_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%7.8f", 1324.5);
  sprintf(s, "%7.8f", 1324.5);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_19_float) {
  char s[10000];
  char s21[10000];
  ck_assert_int_eq(s21_sprintf(s21, "%1000.3f", 1324.45678),
                   sprintf(s, "%1000.3f", 1324.45678));
}
END_TEST

START_TEST(sprintf_19_buffer_float) {
  char s[10000];
  char s21[10000];
  s21_sprintf(s21, "%1000.3f", 1324.45678);
  sprintf(s, "%1000.3f", 1324.45678);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_20_float) {
  char s[50000] = {'\0'};
  char s21[50000] = {'\0'};
  int a = s21_sprintf(s21, "%500.5f", -1324.45678);
  int b = sprintf(s, "%500.5f", -1324.45678);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_20_buffer_float) {
  char s[10000];
  char s21[10000];
  s21_sprintf(s21, "%500.5f", -1324.45678);
  sprintf(s, "%500.5f", -1324.45678);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_21_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-1f", 1324.345),
                   sprintf(s, "%-1f", 1324.345));
}
END_TEST

START_TEST(sprintf_21_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-1f", 1324.345);
  sprintf(s, "%-1f", 1324.345);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_22_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-1f", -1324.345),
                   sprintf(s, "%-1f", -1324.345));
}
END_TEST

START_TEST(sprintf_22_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-1f", -1324.345);
  sprintf(s, "%-1f", -1324.345);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_23_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-3.4f", 1324.777779),
                   sprintf(s, "%-3.4f", 1324.777779));
}
END_TEST

START_TEST(sprintf_23_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-3.4f", 1324.777779);
  sprintf(s, "%-3.4f", 1324.777779);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_24_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-4.4lf", -1324.777779),
                   sprintf(s, "%-4.4lf", -1324.777779));
}
END_TEST

START_TEST(sprintf_24_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-4.4lf", -1324.777779);
  sprintf(s, "%-4.4lf", -1324.777779);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_25_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-5.5f", -1324.777779),
                   sprintf(s, "%-5.5lf", -1324.777779));
}
END_TEST

START_TEST(sprintf_25_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-5.5f", -1324.777779);
  sprintf(s, "%-5.5lf", -1324.777779);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_26_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  int a = s21_sprintf(s21, "%-5.1f", 999.999);
  int b = sprintf(s, "%-5.1lf", 999.999);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_26_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-5.1f", 999.999);
  sprintf(s, "%-5.1lf", 999.999);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_27_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-7.1f", -999.999),
                   sprintf(s, "%-7.1lf", -999.999));
}
END_TEST

START_TEST(sprintf_27_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-7.1f", -999.999);
  sprintf(s, "%-7.1lf", -999.999);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_28_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-7.3f", 999.999),
                   sprintf(s, "%-7.3f", 999.999));
}
END_TEST

START_TEST(sprintf_28_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-7.3f", 999.999);
  sprintf(s, "%-7.3f", 999.999);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_29_float) {
  char s[50000] = {'\0'};
  char s21[50000] = {'\0'};
  int a = s21_sprintf(s21, "%-1000f", 0.0);
  int b = sprintf(s, "%-1000f", 0.0);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_29_buffer_float) {
  char s[10000];
  char s21[10000];
  s21_sprintf(s21, "%-1000f", 0.0);
  sprintf(s, "%-1000f", 0.0);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_30_float) {
  char s[50000] = {'\0'};
  char s21[50000] = {'\0'};
  int a = s21_sprintf(s21, "%-500.3f", -1.555555);
  int b = sprintf(s, "%-500.3lf", -1.555555);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_30_buffer_float) {
  char s[10000];
  char s21[10000];
  s21_sprintf(s21, "%-500.3f", -1.555555);
  sprintf(s, "%-500.3lf", -1.555555);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_31_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-+1.8f", 0.0),
                   sprintf(s, "%-+1.8f", 0.0));
}
END_TEST

START_TEST(sprintf_31_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-+1.8f", 0.0);
  sprintf(s, "%-+1.8f", 0.0);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_32_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-+1.6f", -989.999666),
                   sprintf(s, "%-+1.6f", -989.999666));
}
END_TEST

START_TEST(sprintf_32_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-+1.6f", -989.999666);
  sprintf(s, "%-+1.6f", -989.999666);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_33_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%- 3.4f", 1324.09),
                   sprintf(s, "%- 3.4lf", 1324.09));
}
END_TEST

START_TEST(sprintf_33_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%- 3.4f", 1324.09);
  sprintf(s, "%- 3.4lf", 1324.09);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_34_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%- 4.1f", -1324.0009),
                   sprintf(s, "%- 4.1f", -1324.0009));
}
END_TEST

START_TEST(sprintf_34_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%- 4.1f", -1324.0009);
  sprintf(s, "%- 4.1f", -1324.0009);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_35_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-5lf", -1324.0009),
                   sprintf(s, "%-5lf", -1324.0009));
}
END_TEST

START_TEST(sprintf_35_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-5lf", -1324.0009);
  sprintf(s, "%-5lf", -1324.0009);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_36_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-5.5f", 1324.898989),
                   sprintf(s, "%-5.5f", 1324.898989));
}
END_TEST

START_TEST(sprintf_36_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-5.5f", 1324.898989);
  sprintf(s, "%-5.5f", 1324.898989);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_37_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%- 7.5f", -1324.898989),
                   sprintf(s, "%- 7.5lf", -1324.898989));
}
END_TEST

START_TEST(sprintf_37_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%- 7.5f", -1324.898989);
  sprintf(s, "%- 7.5lf", -1324.898989);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_38_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%- 7.1lf", 1324.000009),
                   sprintf(s, "%- 7.1lf", 1324.000009));
}
END_TEST

START_TEST(sprintf_38_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%- 7.1lf", 1324.000009);
  sprintf(s, "%- 7.1lf", 1324.000009);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_39_float) {
  char s[50000] = {'\0'};
  char s21[50000] = {'\0'};
  int a = s21_sprintf(s21, "%- 1000f", 1324.000009);
  int b = sprintf(s, "%- 1000f", 1324.000009);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_39_buffer_float) {
  char s[10000];
  char s21[10000];
  s21_sprintf(s21, "%- 1000f", 1324.000009);
  sprintf(s, "%- 1000f", 1324.000009);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_40_float) {
  char s[50000] = {'\0'};
  char s21[50000] = {'\0'};
  int a = s21_sprintf(s21, "%+500.3f", -1324.999111);
  int b = sprintf(s, "%+500.3f", -1324.999111);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_40_buffer_float) {
  char s[10000];
  char s21[10000];
  s21_sprintf(s21, "%+500.3f", -1324.999111);
  sprintf(s, "%+500.3f", -1324.999111);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_41_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%-+1.1f Hello %.4f", 1324.0, -1.111234),
                   sprintf(s, "%-+1.1lf Hello %.4lf", 1324.0, -1.111234));
}
END_TEST

START_TEST(sprintf_41_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%-+1.1f Hello %.4f", 1324.0, -1.111234);
  sprintf(s, "%-+1.1lf Hello %.4lf", 1324.0, -1.111234);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_42_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(
      s21_sprintf(s21, "Hello %-+1.6f World % .6f", -1324.12, 1.12),
      sprintf(s, "Hello %-+1.6f World % .6f", -1324.12, 1.12));
}
END_TEST

START_TEST(sprintf_42_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "Hello %-+1.6f World % .6f", -1324.12, 1.12);
  sprintf(s, "Hello %-+1.6f World % .6f", -1324.12, 1.12);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_43_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%- 3.4f Hello %.1f %+10.7f", 1324.999066,
                               1000.1, 5.000000),
                   sprintf(s, "%- 3.4lf Hello %.1lf %+10.7lf", 1324.999066,
                           1000.1, 5.000000));
}
END_TEST

START_TEST(sprintf_43_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%- 3.4f Hello %.1f %+10.7f", 1324.999066, 1000.1, 5.000000);
  sprintf(s, "%- 3.4lf Hello %.1lf %+10.7lf", 1324.999066, 1000.1, 5.000000);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_44_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "%- 4.5lf", -1.991199),
                   sprintf(s, "%- 4.5lf", -1.991199));
}
END_TEST

START_TEST(sprintf_44_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%- 4.5lf", -1.991199);
  sprintf(s, "%- 4.5lf", -1.991199);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_45_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(
      s21_sprintf(s21, "Hello %-5lf world % 10f", -1324.12, 555.222),
      sprintf(s, "Hello %-5f world % 10f", -1324.12, 555.22));
}
END_TEST

START_TEST(sprintf_45_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "Hello %-5lf world % 10f", -1324.12, 555.22);
  sprintf(s, "Hello %-5f world % 10f", -1324.12, 555.22);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_46_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(s21_sprintf(s21, "Hello %% %-5.6f %%", 1324.123666),
                   sprintf(s, "Hello %% %-5.6f %%", 1324.123666));
}
END_TEST

START_TEST(sprintf_46_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "Hello %% %-5.6f %%", 1324.123666);
  sprintf(s, "Hello %% %-5.6f %%", 1324.123666);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_47_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(
      s21_sprintf(s21, "%% %-+20f Hello World %- 7f", -1324.010100, 5.991123),
      sprintf(s, "%% %-+20f Hello World %- 7f", -1324.010100, 5.991123));
}
END_TEST

START_TEST(sprintf_47_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%% %-+20f Hello World %- 7f", -1324.010100, 5.991123);
  sprintf(s, "%% %-+20f Hello World %- 7f", -1324.010100, 5.991123);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_48_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  ck_assert_int_eq(
      s21_sprintf(s21, "%- 7.1lf %% He%-1.2fllo %% W %.3f", 1324.0, 0.0, 10.0),
      sprintf(s, "%- 7.1lf %% He%-1.2lfllo %% W %.3lf", 1324.0, 0.0, 10.0));
}
END_TEST

START_TEST(sprintf_48_buffer_float) {
  char s[1000] = {'\0'};
  char s21[1000] = {'\0'};
  s21_sprintf(s21, "%- 7.1lf %% He%-1.2fllo %% W %.3f", 1324.0, 0.0, 10.0);
  sprintf(s, "%- 7.1lf %% He%-1.2lfllo %% W %.3lf", 1324.0, 0.0, 10.0);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_49_float) {
  char s[50000] = {'\0'};
  char s21[50000] = {'\0'};
  int a = s21_sprintf(s21, "Hello %- 1000.4f %% World %+.4f %- 5.1f",
                      1324.000009, 1234.000900, 0.999999);
  int b = sprintf(s, "Hello %- 1000.4lf %% World %+.4lf %- 5.1lf", 1324.000009,
                  1234.000900, 0.999999);
  ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(sprintf_49_buffer_float) {
  char s[10000];
  char s21[10000];
  s21_sprintf(s21, "Hello %- 1000.4f %% World %+.4f %- 5.1f", 1324.000009,
              1234.000900, 0.999999);
  sprintf(s, "Hello %- 1000.4lf %% World %+.4lf %- 5.1lf", 1324.000009,
          1234.000900, 0.999999);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(sprintf_50_float) {
  char s[10000];
  char s21[10000];
  ck_assert_int_eq(s21_sprintf(s21, "% f%-f%+f", -1324.12, 0.1, 9.0001),
                   sprintf(s, "% f%-f%+f", -1324.12, 0.1, 9.0001));
}
END_TEST

START_TEST(sprintf_50_buffer_float) {
  char s[10000];
  char s21[10000];
  s21_sprintf(s21, "% f%-f%+f", -1324.12, 0.1, 9.0001);
  sprintf(s, "% f%-f%+f", -1324.12, 0.1, 9.0001);
  ck_assert_str_eq(s21, s);
}
END_TEST

START_TEST(insert_1) {
  char str1[] = "abc";
  char str2[] = "def";
  int n = 3;
  char *str3 = s21_insert(str1, str2, n);
  ck_assert_str_eq(str3, "abcdef");
  if (str3) free(str3);
}
END_TEST

START_TEST(insert_2) {
  char str1[] = "abc";
  char str2[] = "def";
  int n = 2;
  char *str3 = s21_insert(str1, str2, n);
  ck_assert_str_eq(str3, "abdefc");
  if (str3) free(str3);
}
END_TEST

START_TEST(insert_3) {
  char str1[] = "abc";
  char str2[] = "def";
  int n = 1;
  char *str3 = s21_insert(str1, str2, n);
  ck_assert_str_eq(str3, "adefbc");
  if (str3) free(str3);
}
END_TEST

START_TEST(insert_4) {
  char str1[] = "abc";
  char str2[] = "def";
  int n = 0;
  char *str3 = s21_insert(str1, str2, n);
  ck_assert_str_eq(str3, "defabc");
  if (str3) free(str3);
}
END_TEST

START_TEST(insert_5) {
  char str1[] = "abcdefghijkl123456789";
  char str2[] = "xyz";
  int n = 5;
  char *str3 = s21_insert(str1, str2, n);
  ck_assert_str_eq(str3, "abcdexyzfghijkl123456789");
  if (str3) free(str3);
}
END_TEST

START_TEST(insert_6) {
  char str1[] = "abc";
  char str2[] = "";
  int n = 0;
  char *str3 = s21_insert(str1, str2, n);
  ck_assert_str_eq(str3, "abc");
  if (str3) free(str3);
}
END_TEST

START_TEST(insert_7) {
  char str1[] = "abc";
  char str2[] = "";
  int n = 1;
  char *str3 = s21_insert(str1, str2, n);
  ck_assert_str_eq(str3, "abc");
  if (str3) free(str3);
}
END_TEST

START_TEST(insert_8) {
  char str1[] = "abc";
  char str2[] = "";
  int n = 3;
  char *str3 = s21_insert(str1, str2, n);
  ck_assert_str_eq(str3, "abc");
  if (str3) free(str3);
}
END_TEST

START_TEST(insert_9) {
  char str1[] = "";
  char str2[] = "abc";
  int n = 1;
  char *str3 = s21_insert(str1, str2, n);
  ck_assert_pstr_eq(str3, s21_NULL);
  if (str3) free(str3);
}
END_TEST

START_TEST(insert_10) {
  char str1[] = "";
  char str2[] = "abc";
  int n = 0;
  char *str3 = s21_insert(str1, str2, n);
  ck_assert_str_eq(str3, "abc");
  if (str3) free(str3);
}
END_TEST

START_TEST(insert_11) {
  char str1[] = "";
  char str2[] = "abc";
  int n = 3;
  char *str3 = s21_insert(str1, str2, n);
  ck_assert_pstr_eq(str3, s21_NULL);
  if (str3) free(str3);
}
END_TEST

START_TEST(insert_12) {
  char str1[] = "";
  char str2[] = "";
  int n = 3;
  char *str3 = s21_insert(str1, str2, n);
  ck_assert_pstr_eq(str3, s21_NULL);
  if (str3) free(str3);
}
END_TEST

START_TEST(insert_13) {
  char str1[] = "";
  char str2[] = "";
  int n = 0;
  char *str3 = s21_insert(str1, str2, n);
  ck_assert_str_eq(str3, "");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_1) {
  char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char str2[] = "ABC";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "DEFGHIJKLMNOPQRSTUVWXYZ");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_2) {
  char str1[] = "ABCDEFGHIabcABCPQRSTUVWXYZ";
  char str2[] = "ABC";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "DEFGHIabcABCPQRSTUVWXYZ");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_3) {
  char str1[] = "ABCDEFGHIabcABCPQRSTUVWXYZABC";
  char str2[] = "ABC";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "DEFGHIabcABCPQRSTUVWXYZ");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_4) {
  char str1[] = "ABCDEFGHIabcABCPQRSTUVWXYZabc";
  char str2[] = "ABC";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "DEFGHIabcABCPQRSTUVWXYZabc");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_5) {
  char str1[] = "ABCDEFGHIabcABCPQRSTUVWXYZabc";
  char str2[] = "abc";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "ABCDEFGHIabcABCPQRSTUVWXYZ");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_6) {
  char str1[] = "abc123abc";
  char str2[] = "abc";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "123");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_7) {
  char str1[] = "abc123abc456abc";
  char str2[] = "abc";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "123abc456");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_8) {
  char str1[] = "a1bc123abc456a1bc";
  char str2[] = "abc";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "1bc123abc456a1");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_9) {
  char str1[] = "a1bc123abc456a1bc";
  char str2[] = "a1bc";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "23abc456");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_10) {
  char str1[] = "abc123abc456a1bc";
  char str2[] = "ab2c";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "123abc456a1");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_11) {
  char str1[] = "abc123abc456a1bc";
  char str2[] = "ab12c";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "3abc456");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_12) {
  char str1[] = "abAc123abc456aB1bc";
  char str2[] = "ab12c";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "Ac123abc456aB");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_13) {
  char str1[] = "abAc123abc456aB1bc";
  char str2[] = "aBb12c";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "Ac123abc456");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_14) {
  char str1[] = "11222333444aaaBaabaA53332244445677Babab7878998";
  char str2[] = "aBbA12c";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "333444aaaBaabaA53332244445677Babab7878998");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_15) {
  char str1[] = "11222333444aaaBaabaA53332244445677Babab7878998";
  char str2[] = "4aB3bA12c";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "53332244445677Babab7878998");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_16) {
  char str1[] = "11222333444aaaBaabaA53332244445677Babab7878998";
  char str2[] = "4aB37bA897c";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "11222333444aaaBaabaA533322444456");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_17) {
  char str1[] = "11222333444aaaBaabaA53332244445677Babab7878998";
  char str2[] = "4223aB437bA189117c";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "533322444456");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_18) {
  char str1[] = "11222333444aaaBaabaA53332244445677Babab7878998";
  char str2[] = "4223aB6437bA1589117c";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_19) {
  char str1[] = "11222333444aaaBaabaA53332244445677Babab7878998";
  char str2[] = "jK";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "11222333444aaaBaabaA53332244445677Babab7878998");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_20) {
  char str1[] = "";
  char str2[] = "jK";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_21) {
  char str1[] = "sdfghjk";
  char str2[] = " ";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "sdfghjk");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_22) {
  char str1[] = "sdfg hjk";
  char str2[] = " ";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "sdfg hjk");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_23) {
  char str1[] = " ";
  char str2[] = " ";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_24) {
  char str1[] = "a231546yutiljkhgtyre565786oiu;jlkhb12";
  char str2[] = "12333333333333333333333333333333333ab";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "546yutiljkhgtyre565786oiu;jlkh");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_25) {
  char str1[] = "a231546yutiljkhgtyre565786oiu;jlkhb12";
  char str2[] = "12333333333333333333333333333333333abmmmmmm";
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "546yutiljkhgtyre565786oiu;jlkh");
  if (str3) free(str3);
}
END_TEST

START_TEST(trim_26) {
  char str1[] = "   abc   ";
  char *str2 = NULL;
  char *str3 = s21_trim(str1, str2);
  ck_assert_str_eq(str3, "abc");
  if (str3) free(str3);
}
END_TEST

START_TEST(to_upper_1) {
  char str1[] = "abc";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "ABC");
  free(str2);
}
END_TEST

START_TEST(to_upper_2) {
  char str1[] = "aBc";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "ABC");
  free(str2);
}
END_TEST

START_TEST(to_upper_3) {
  char str1[] = "abC";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "ABC");
  free(str2);
}
END_TEST

START_TEST(to_upper_4) {
  char str1[] = "ABC";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "ABC");
  free(str2);
}
END_TEST

START_TEST(to_upper_5) {
  char str1[] = "123";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "123");
  free(str2);
}
END_TEST

START_TEST(to_upper_6) {
  char str1[] = "123abc";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "123ABC");
  free(str2);
}
END_TEST

START_TEST(to_upper_7) {
  char str1[] = "aBaBc";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "ABABC");
  free(str2);
}
END_TEST

START_TEST(to_upper_8) {
  char str1[] = ".,/.,/.,";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, ".,/.,/.,");
  free(str2);
}
END_TEST

START_TEST(to_upper_9) {
  char str1[] = "09876abc";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "09876ABC");
  free(str2);
}
END_TEST

START_TEST(to_upper_10) {
  char str1[] = "abc123";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "ABC123");
  free(str2);
}
END_TEST

START_TEST(to_upper_11) {
  char str1[] = " ";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, " ");
  free(str2);
}
END_TEST

START_TEST(to_upper_12) {
  char str1[] = "";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "");
  free(str2);
}
END_TEST

START_TEST(to_upper_13) {
  char str1[] = "a1a1a1";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "A1A1A1");
  free(str2);
}
END_TEST

START_TEST(to_upper_14) {
  char str1[] = " a1a1a1";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, " A1A1A1");
  free(str2);
}
END_TEST

START_TEST(to_upper_15) {
  char str1[] = "a1a1a1 ";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "A1A1A1 ");
  free(str2);
}
END_TEST

START_TEST(to_upper_16) {
  char str1[] = "Aa1a1a1";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "AA1A1A1");
  free(str2);
}
END_TEST

START_TEST(to_upper_17) {
  char str1[] = "a1a1a1A";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "A1A1A1A");
  free(str2);
}
END_TEST

START_TEST(to_upper_18) {
  char str1[] = "a1a1\0a1";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "A1A1\0A1");
  free(str2);
}
END_TEST

START_TEST(to_upper_19) {
  char str1[] = "a1a\n1a1";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "A1A\n1A1");
  free(str2);
}
END_TEST

START_TEST(to_upper_20) {
  char str1[] = "abcdefghijklmnopqrstuvwxyz";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
  free(str2);
}
END_TEST

START_TEST(to_upper_21) {
  char str1[] = ")(*&^YTRYUIKJHWR<LR3.,tmwnrg.";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, ")(*&^YTRYUIKJHWR<LR3.,TMWNRG.");
  free(str2);
}
END_TEST

START_TEST(to_upper_22) {
  char str1[] = " ";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, " ");
  free(str2);
}
END_TEST

START_TEST(to_upper_23) {
  char str1[] = "ABC";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "ABC");
  free(str2);
}
END_TEST

START_TEST(to_upper_24) {
  char str1[] = "_az{";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2, "_AZ{");
  free(str2);
}
END_TEST

START_TEST(to_upper_25) {
  char str1[] =
      "SDFGHJKLPOIUYTREWQWERTYUIOP["
      "OIUYTRFGHJKLJHBVNMASDFGHJKLPOIUYTREWQWERTYUIO";
  char *str2 = s21_to_upper(str1);
  ck_assert_str_eq(str2,
                   "SDFGHJKLPOIUYTREWQWERTYUIOP["
                   "OIUYTRFGHJKLJHBVNMASDFGHJKLPOIUYTREWQWERTYUIO");
  free(str2);
}
END_TEST

START_TEST(to_lower_1) {
  char str1[] = "ABC";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "abc");
  free(str2);
}
END_TEST

START_TEST(to_lower_2) {
  char str1[] = "aBc";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "abc");
  free(str2);
}
END_TEST

START_TEST(to_lower_3) {
  char str1[] = "abC";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "abc");
  free(str2);
}
END_TEST

START_TEST(to_lower_4) {
  char str1[] = "ABC";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "abc");
  free(str2);
}
END_TEST

START_TEST(to_lower_5) {
  char str1[] = "123";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "123");
  free(str2);
}
END_TEST

START_TEST(to_lower_6) {
  char str1[] = "123ABC";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "123abc");
  free(str2);
}
END_TEST

START_TEST(to_lower_7) {
  char str1[] = "aBaBc";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "ababc");
  free(str2);
}
END_TEST

START_TEST(to_lower_8) {
  char str1[] = ".,/.,/.,";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, ".,/.,/.,");
  free(str2);
}
END_TEST

START_TEST(to_lower_9) {
  char str1[] = "09876ABC";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "09876abc");
  free(str2);
}
END_TEST

START_TEST(to_lower_10) {
  char str1[] = "ABC123";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "abc123");
  free(str2);
}
END_TEST

START_TEST(to_lower_11) {
  char str1[] = " ";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, " ");
  free(str2);
}
END_TEST

START_TEST(to_lower_12) {
  char str1[] = "";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "");
  free(str2);
}
END_TEST

START_TEST(to_lower_13) {
  char str1[] = "A1A1A1";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "a1a1a1");
  free(str2);
}
END_TEST

START_TEST(to_lower_14) {
  char str1[] = " A1A1A1";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, " a1a1a1");
  free(str2);
}
END_TEST

START_TEST(to_lower_15) {
  char str1[] = "A1A1A1 ";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "a1a1a1 ");
  free(str2);
}
END_TEST

START_TEST(to_lower_16) {
  char str1[] = "AA1A1A1";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "aa1a1a1");
  free(str2);
}
END_TEST

START_TEST(to_lower_17) {
  char str1[] = "A1a1A1A";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "a1a1a1a");
  free(str2);
}
END_TEST

START_TEST(to_lower_18) {
  char str1[] = "A1A1\0a1";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "a1a1\0a1");
  free(str2);
}
END_TEST

START_TEST(to_lower_19) {
  char str1[] = "A1a\n1A1";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "a1a\n1a1");
  free(str2);
}
END_TEST

START_TEST(to_lower_20) {
  char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char *str2 = s21_to_lower(str1);
  ck_assert_str_eq(str2, "abcdefghijklmnopqrstuvwxyz");
  free(str2);
}
END_TEST

Suite *root_suite(void) {
  Suite *s;
  s = suite_create("unit_tests");
  TCase *tc_memchr_1, *tc_memchr_2, *tc_memchr_3, *tc_memchr_4, *tc_memchr_5,
      *tc_memchr_6, *tc_memchr_7, *tc_memchr_8, *tc_memchr_9, *tc_memchr_10,
      *tc_memchr_11, *tc_memchr_12, *tc_memchr_13, *tc_memchr_14, *tc_memchr_15,
      *tc_memchr_16, *tc_memchr_17, *tc_memchr_18, *tc_memchr_19, *tc_memchr_21,
      *tc_memchr_22, *tc_memchr_23, *tc_memchr_24, *tc_memchr_25, *tc_memchr_26,
      *tc_memchr_27, *tc_memchr_28, *tc_memchr_29, *tc_memchr_30, *tc_memchr_32,
      *tc_memchr_33, *tc_memchr_34, *tc_memchr_35, *tc_memchr_36, *tc_memchr_37,
      *tc_memchr_38, *tc_memchr_39, *tc_memchr_40, *tc_memchr_41, *tc_memchr_42,
      *tc_memchr_43;

  TCase *tc_memcmp_1, *tc_memcmp_2, *tc_memcmp_3, *tc_memcmp_4, *tc_memcmp_5,
      *tc_memcmp_6, *tc_memcmp_7, *tc_memcmp_8, *tc_memcmp_9, *tc_memcmp_10,
      *tc_memcmp_11, *tc_memcmp_12, *tc_memcmp_13, *tc_memcmp_14, *tc_memcmp_15,
      *tc_memcmp_16, *tc_memcmp_17, *tc_memcmp_18, *tc_memcmp_19, *tc_memcmp_20,
      *tc_memcmp_21, *tc_memcmp_22, *tc_memcmp_23, *tc_memcmp_24, *tc_memcmp_25,
      *tc_memcmp_26, *tc_memcmp_27, *tc_memcmp_28, *tc_memcmp_29, *tc_memcmp_30,
      *tc_memcmp_31, *tc_memcmp_32, *tc_memcmp_33, *tc_memcmp_34, *tc_memcmp_35,
      *tc_memcmp_36, *tc_memcmp_37, *tc_memcmp_38, *tc_memcmp_39, *tc_memcmp_50,
      *tc_memcmp_51, *tc_memcmp_52, *tc_memcmp_53, *tc_memcmp_54, *tc_memcmp_55,
      *tc_memcmp_56, *tc_memcmp_57, *tc_memcmp_58, *tc_memcmp_59, *tc_memcmp_60;

  TCase *tc_memcpy_1, *tc_memcpy_2, *tc_memcpy_3, *tc_memcpy_4, *tc_memcpy_5,
      *tc_memcpy_6, *tc_memcpy_7, *tc_memcpy_8, *tc_memcpy_9, *tc_memcpy_10,
      *tc_memcpy_11, *tc_memcpy_12, *tc_memcpy_13, *tc_memcpy_14, *tc_memcpy_15,
      *tc_memcpy_16, *tc_memcpy_17, *tc_memcpy_18, *tc_memcpy_19, *tc_memcpy_20;

  TCase *tc_memset_1, *tc_memset_2, *tc_memset_3, *tc_memset_4, *tc_memset_5,
      *tc_memset_6, *tc_memset_7, *tc_memset_8, *tc_memset_9, *tc_memset_10,
      *tc_memset_11, *tc_memset_12, *tc_memset_13, *tc_memset_14, *tc_memset_15,
      *tc_memset_16, *tc_memset_17, *tc_memset_18, *tc_memset_19, *tc_memset_20,
      *tc_memset_21, *tc_memset_22, *tc_memset_23, *tc_memset_24, *tc_memset_25,
      *tc_memset_26, *tc_memset_27, *tc_memset_28, *tc_memset_29, *tc_memset_30,
      *tc_memset_31, *tc_memset_32, *tc_memset_33, *tc_memset_34, *tc_memset_35,
      *tc_memset_36, *tc_memset_37, *tc_memset_38, *tc_memset_39, *tc_memset_40,
      *tc_memset_41, *tc_memset_42, *tc_memset_43, *tc_memset_44, *tc_memset_45,
      *tc_memset_46;

  TCase *tc_strncat_1, *tc_strncat_2, *tc_strncat_3, *tc_strncat_4,
      *tc_strncat_5, *tc_strncat_6, *tc_strncat_7, *tc_strncat_8, *tc_strncat_9,
      *tc_strncat_10, *tc_strncat_11, *tc_strncat_12, *tc_strncat_13,
      *tc_strncat_14, *tc_strncat_20;

  TCase *tc_strchr_1, *tc_strchr_2, *tc_strchr_3, *tc_strchr_4, *tc_strchr_5,
      *tc_strchr_6, *tc_strchr_7, *tc_strchr_8, *tc_strchr_9, *tc_strchr_10,
      *tc_strchr_11, *tc_strchr_12, *tc_strchr_13, *tc_strchr_14, *tc_strchr_15,
      *tc_strchr_16, *tc_strchr_17, *tc_strchr_18, *tc_strchr_19, *tc_strchr_20,
      *tc_strchr_21;

  TCase *tc_strncmp_1;

  tc_memchr_1 = tcase_create("memchr_1");
  tcase_add_test(tc_memchr_1, memchr_1);
  suite_add_tcase(s, tc_memchr_1);

  tc_memchr_2 = tcase_create("memchr_2");
  tcase_add_test(tc_memchr_2, memchr_2);
  suite_add_tcase(s, tc_memchr_2);

  tc_memchr_3 = tcase_create("memchr_3");
  tcase_add_test(tc_memchr_3, memchr_3);
  suite_add_tcase(s, tc_memchr_3);

  tc_memchr_4 = tcase_create("memchr_4");
  tcase_add_test(tc_memchr_4, memchr_4);
  suite_add_tcase(s, tc_memchr_4);

  tc_memchr_5 = tcase_create("memchr_5");
  tcase_add_test(tc_memchr_5, memchr_5);
  suite_add_tcase(s, tc_memchr_5);

  tc_memchr_6 = tcase_create("memchr_6");
  tcase_add_test(tc_memchr_6, memchr_6);
  suite_add_tcase(s, tc_memchr_6);

  tc_memchr_7 = tcase_create("memchr_7");
  tcase_add_test(tc_memchr_7, memchr_7);
  suite_add_tcase(s, tc_memchr_7);

  tc_memchr_8 = tcase_create("memchr_8");
  tcase_add_test(tc_memchr_8, memchr_8);
  suite_add_tcase(s, tc_memchr_8);

  tc_memchr_9 = tcase_create("memchr_9");
  tcase_add_test(tc_memchr_9, memchr_9);
  suite_add_tcase(s, tc_memchr_9);

  tc_memchr_10 = tcase_create("memchr_10");
  tcase_add_test(tc_memchr_10, memchr_10);
  suite_add_tcase(s, tc_memchr_10);

  tc_memchr_11 = tcase_create("memchr_11");
  tcase_add_test(tc_memchr_11, memchr_11);
  suite_add_tcase(s, tc_memchr_11);

  tc_memchr_12 = tcase_create("memchr_12");
  tcase_add_test(tc_memchr_12, memchr_12);
  suite_add_tcase(s, tc_memchr_12);

  tc_memchr_13 = tcase_create("memchr_13");
  tcase_add_test(tc_memchr_13, memchr_13);
  suite_add_tcase(s, tc_memchr_13);

  tc_memchr_14 = tcase_create("memchr_14");
  tcase_add_test(tc_memchr_14, memchr_14);
  suite_add_tcase(s, tc_memchr_14);

  tc_memchr_15 = tcase_create("memchr_15");
  tcase_add_test(tc_memchr_15, memchr_15);
  suite_add_tcase(s, tc_memchr_15);

  tc_memchr_16 = tcase_create("memchr_16");
  tcase_add_test(tc_memchr_16, memchr_16);
  suite_add_tcase(s, tc_memchr_16);

  tc_memchr_17 = tcase_create("memchr_17");
  tcase_add_test(tc_memchr_17, memchr_17);
  suite_add_tcase(s, tc_memchr_17);

  tc_memchr_18 = tcase_create("memchr_18");
  tcase_add_test(tc_memchr_18, memchr_18);
  suite_add_tcase(s, tc_memchr_18);

  tc_memchr_19 = tcase_create("memchr_19");
  tcase_add_test(tc_memchr_19, memchr_19);
  suite_add_tcase(s, tc_memchr_19);

  tc_memchr_21 = tcase_create("memchr_21");
  tcase_add_test(tc_memchr_21, memchr_21);
  suite_add_tcase(s, tc_memchr_21);

  tc_memchr_22 = tcase_create("memchr_22");
  tcase_add_test(tc_memchr_22, memchr_22);
  suite_add_tcase(s, tc_memchr_22);

  tc_memchr_23 = tcase_create("memchr_23");
  tcase_add_test(tc_memchr_23, memchr_23);
  suite_add_tcase(s, tc_memchr_23);

  tc_memchr_24 = tcase_create("memchr_24");
  tcase_add_test(tc_memchr_24, memchr_24);
  suite_add_tcase(s, tc_memchr_24);

  tc_memchr_25 = tcase_create("memchr_25");
  tcase_add_test(tc_memchr_25, memchr_25);
  suite_add_tcase(s, tc_memchr_25);

  tc_memchr_26 = tcase_create("memchr_26");
  tcase_add_test(tc_memchr_26, memchr_26);
  suite_add_tcase(s, tc_memchr_26);

  tc_memchr_27 = tcase_create("memchr_27");
  tcase_add_test(tc_memchr_27, memchr_27);
  suite_add_tcase(s, tc_memchr_27);

  tc_memchr_28 = tcase_create("memchr_28");
  tcase_add_test(tc_memchr_28, memchr_28);
  suite_add_tcase(s, tc_memchr_28);

  tc_memchr_29 = tcase_create("memchr_29");
  tcase_add_test(tc_memchr_29, memchr_29);
  suite_add_tcase(s, tc_memchr_29);

  tc_memchr_30 = tcase_create("memchr_30");
  tcase_add_test(tc_memchr_30, memchr_30);
  suite_add_tcase(s, tc_memchr_30);

  tc_memchr_32 = tcase_create("memchr_32");
  tcase_add_test(tc_memchr_32, memchr_32);
  suite_add_tcase(s, tc_memchr_32);

  tc_memchr_33 = tcase_create("memchr_33");
  tcase_add_test(tc_memchr_33, memchr_33);
  suite_add_tcase(s, tc_memchr_33);

  tc_memchr_34 = tcase_create("memchr_34");
  tcase_add_test(tc_memchr_34, memchr_34);
  suite_add_tcase(s, tc_memchr_34);

  tc_memchr_35 = tcase_create("memchr_35");
  tcase_add_test(tc_memchr_35, memchr_35);
  suite_add_tcase(s, tc_memchr_35);

  tc_memchr_36 = tcase_create("memchr_36");
  tcase_add_test(tc_memchr_36, memchr_36);
  suite_add_tcase(s, tc_memchr_36);

  tc_memchr_37 = tcase_create("memchr_37");
  tcase_add_test(tc_memchr_37, memchr_37);
  suite_add_tcase(s, tc_memchr_37);

  tc_memchr_38 = tcase_create("memchr_38");
  tcase_add_test(tc_memchr_38, memchr_38);
  suite_add_tcase(s, tc_memchr_38);

  tc_memchr_39 = tcase_create("memchr_39");
  tcase_add_test(tc_memchr_39, memchr_39);
  suite_add_tcase(s, tc_memchr_39);

  tc_memchr_40 = tcase_create("memchr_40");
  tcase_add_test(tc_memchr_40, memchr_40);
  suite_add_tcase(s, tc_memchr_40);

  tc_memchr_41 = tcase_create("memchr_41");
  tcase_add_test(tc_memchr_41, memchr_41);
  suite_add_tcase(s, tc_memchr_41);

  tc_memchr_42 = tcase_create("memchr_42");
  tcase_add_test(tc_memchr_42, memchr_42);
  suite_add_tcase(s, tc_memchr_42);

  tc_memchr_43 = tcase_create("memchr_43");
  tcase_add_test(tc_memchr_43, memchr_43);
  suite_add_tcase(s, tc_memchr_43);

  tc_memcmp_1 = tcase_create("memcmp_1");
  tcase_add_test(tc_memcmp_1, memcmp_1);
  suite_add_tcase(s, tc_memcmp_1);

  tc_memcmp_2 = tcase_create("memcmp_2");
  tcase_add_test(tc_memcmp_2, memcmp_2);
  suite_add_tcase(s, tc_memcmp_2);

  tc_memcmp_3 = tcase_create("memcmp_3");
  tcase_add_test(tc_memcmp_3, memcmp_3);
  suite_add_tcase(s, tc_memcmp_3);

  tc_memcmp_4 = tcase_create("memcmp_4");
  tcase_add_test(tc_memcmp_4, memcmp_4);
  suite_add_tcase(s, tc_memcmp_4);

  tc_memcmp_5 = tcase_create("memcmp_5");
  tcase_add_test(tc_memcmp_5, memcmp_5);
  suite_add_tcase(s, tc_memcmp_5);

  tc_memcmp_6 = tcase_create("memcmp_6");
  tcase_add_test(tc_memcmp_6, memcmp_6);
  suite_add_tcase(s, tc_memcmp_6);

  tc_memcmp_7 = tcase_create("memcmp_7");
  tcase_add_test(tc_memcmp_7, memcmp_7);
  suite_add_tcase(s, tc_memcmp_7);

  tc_memcmp_8 = tcase_create("memcmp_8");
  tcase_add_test(tc_memcmp_8, memcmp_8);
  suite_add_tcase(s, tc_memcmp_8);

  tc_memcmp_9 = tcase_create("memcmp_9");
  tcase_add_test(tc_memcmp_9, memcmp_9);
  suite_add_tcase(s, tc_memcmp_9);

  tc_memcmp_10 = tcase_create("memcmp_10");
  tcase_add_test(tc_memcmp_10, memcmp_10);
  suite_add_tcase(s, tc_memcmp_10);

  tc_memcmp_11 = tcase_create("memcmp_11");
  tcase_add_test(tc_memcmp_11, memcmp_11);
  suite_add_tcase(s, tc_memcmp_11);

  tc_memcmp_12 = tcase_create("memcmp_12");
  tcase_add_test(tc_memcmp_12, memcmp_12);
  suite_add_tcase(s, tc_memcmp_12);

  tc_memcmp_13 = tcase_create("memcmp_13");
  tcase_add_test(tc_memcmp_13, memcmp_13);
  suite_add_tcase(s, tc_memcmp_13);

  tc_memcmp_14 = tcase_create("memcmp_14");
  tcase_add_test(tc_memcmp_14, memcmp_14);
  suite_add_tcase(s, tc_memcmp_14);

  tc_memcmp_15 = tcase_create("memcmp_15");
  tcase_add_test(tc_memcmp_15, memcmp_15);
  suite_add_tcase(s, tc_memcmp_15);

  tc_memcmp_16 = tcase_create("memcmp_16");
  tcase_add_test(tc_memcmp_16, memcmp_16);
  suite_add_tcase(s, tc_memcmp_16);

  tc_memcmp_17 = tcase_create("memcmp_17");
  tcase_add_test(tc_memcmp_17, memcmp_17);
  suite_add_tcase(s, tc_memcmp_17);

  tc_memcmp_18 = tcase_create("memcmp_18");
  tcase_add_test(tc_memcmp_18, memcmp_18);
  suite_add_tcase(s, tc_memcmp_18);

  tc_memcmp_19 = tcase_create("memcmp_19");
  tcase_add_test(tc_memcmp_19, memcmp_19);
  suite_add_tcase(s, tc_memcmp_19);

  tc_memcmp_20 = tcase_create("memcmp_20");
  tcase_add_test(tc_memcmp_20, memcmp_20);
  suite_add_tcase(s, tc_memcmp_20);

  tc_memcmp_21 = tcase_create("memcmp_21");
  tcase_add_test(tc_memcmp_21, memcmp_21);
  suite_add_tcase(s, tc_memcmp_21);

  tc_memcmp_22 = tcase_create("memcmp_22");
  tcase_add_test(tc_memcmp_22, memcmp_22);
  suite_add_tcase(s, tc_memcmp_22);

  tc_memcmp_23 = tcase_create("memcmp_23");
  tcase_add_test(tc_memcmp_23, memcmp_23);
  suite_add_tcase(s, tc_memcmp_23);

  tc_memcmp_24 = tcase_create("memcmp_24");
  tcase_add_test(tc_memcmp_24, memcmp_24);
  suite_add_tcase(s, tc_memcmp_24);

  tc_memcmp_25 = tcase_create("memcmp_25");
  tcase_add_test(tc_memcmp_25, memcmp_25);
  suite_add_tcase(s, tc_memcmp_25);

  tc_memcmp_26 = tcase_create("memcmp_26");
  tcase_add_test(tc_memcmp_26, memcmp_26);
  suite_add_tcase(s, tc_memcmp_26);

  tc_memcmp_27 = tcase_create("memcmp_27");
  tcase_add_test(tc_memcmp_27, memcmp_27);
  suite_add_tcase(s, tc_memcmp_27);

  tc_memcmp_28 = tcase_create("memcmp_28");
  tcase_add_test(tc_memcmp_28, memcmp_28);
  suite_add_tcase(s, tc_memcmp_28);

  tc_memcmp_29 = tcase_create("memcmp_29");
  tcase_add_test(tc_memcmp_29, memcmp_29);
  suite_add_tcase(s, tc_memcmp_29);

  tc_memcmp_30 = tcase_create("memcmp_30");
  tcase_add_test(tc_memcmp_30, memcmp_30);
  suite_add_tcase(s, tc_memcmp_30);

  tc_memcmp_31 = tcase_create("memcmp_31");
  tcase_add_test(tc_memcmp_31, memcmp_31);
  suite_add_tcase(s, tc_memcmp_31);

  tc_memcmp_32 = tcase_create("memcmp_32");
  tcase_add_test(tc_memcmp_32, memcmp_32);
  suite_add_tcase(s, tc_memcmp_32);

  tc_memcmp_33 = tcase_create("memcmp_33");
  tcase_add_test(tc_memcmp_33, memcmp_33);
  suite_add_tcase(s, tc_memcmp_33);

  tc_memcmp_34 = tcase_create("memcmp_34");
  tcase_add_test(tc_memcmp_34, memcmp_34);
  suite_add_tcase(s, tc_memcmp_34);

  tc_memcmp_35 = tcase_create("memcmp_35");
  tcase_add_test(tc_memcmp_35, memcmp_35);
  suite_add_tcase(s, tc_memcmp_35);

  tc_memcmp_36 = tcase_create("memcmp_36");
  tcase_add_test(tc_memcmp_36, memcmp_36);
  suite_add_tcase(s, tc_memcmp_36);

  tc_memcmp_37 = tcase_create("memcmp_37");
  tcase_add_test(tc_memcmp_37, memcmp_37);
  suite_add_tcase(s, tc_memcmp_37);

  tc_memcmp_38 = tcase_create("memcmp_38");
  tcase_add_test(tc_memcmp_38, memcmp_38);
  suite_add_tcase(s, tc_memcmp_38);

  tc_memcmp_39 = tcase_create("memcmp_39");
  tcase_add_test(tc_memcmp_39, memcmp_39);
  suite_add_tcase(s, tc_memcmp_39);

  tc_memcmp_50 = tcase_create("memcmp_50");
  tcase_add_test(tc_memcmp_50, memcmp_50);
  suite_add_tcase(s, tc_memcmp_50);

  tc_memcmp_51 = tcase_create("memcmp_51");
  tcase_add_test(tc_memcmp_51, memcmp_51);
  suite_add_tcase(s, tc_memcmp_51);

  tc_memcmp_52 = tcase_create("memcmp_52");
  tcase_add_test(tc_memcmp_52, memcmp_52);
  suite_add_tcase(s, tc_memcmp_52);

  tc_memcmp_53 = tcase_create("memcmp_53");
  tcase_add_test(tc_memcmp_53, memcmp_53);
  suite_add_tcase(s, tc_memcmp_53);

  tc_memcmp_54 = tcase_create("memcmp_54");
  tcase_add_test(tc_memcmp_54, memcmp_54);
  suite_add_tcase(s, tc_memcmp_54);

  tc_memcmp_55 = tcase_create("memcmp_55");
  tcase_add_test(tc_memcmp_55, memcmp_55);
  suite_add_tcase(s, tc_memcmp_55);

  tc_memcmp_56 = tcase_create("memcmp_56");
  tcase_add_test(tc_memcmp_56, memcmp_56);
  suite_add_tcase(s, tc_memcmp_56);

  tc_memcmp_57 = tcase_create("memcmp_57");
  tcase_add_test(tc_memcmp_57, memcmp_57);
  suite_add_tcase(s, tc_memcmp_57);

  tc_memcmp_58 = tcase_create("memcmp_58");
  tcase_add_test(tc_memcmp_58, memcmp_58);
  suite_add_tcase(s, tc_memcmp_58);

  tc_memcmp_59 = tcase_create("memcmp_59");
  tcase_add_test(tc_memcmp_59, memcmp_59);
  suite_add_tcase(s, tc_memcmp_59);

  tc_memcmp_60 = tcase_create("memcmp_60");
  tcase_add_test(tc_memcmp_60, memcmp_60);
  suite_add_tcase(s, tc_memcmp_60);

  tc_memcpy_1 = tcase_create("memcpy_1");
  tcase_add_test(tc_memcpy_1, memcpy_1);
  suite_add_tcase(s, tc_memcpy_1);

  tc_memcpy_2 = tcase_create("memcpy_2");
  tcase_add_test(tc_memcpy_2, memcpy_2);
  suite_add_tcase(s, tc_memcpy_2);

  tc_memcpy_3 = tcase_create("memcpy_3");
  tcase_add_test(tc_memcpy_3, memcpy_3);
  suite_add_tcase(s, tc_memcpy_3);

  tc_memcpy_4 = tcase_create("memcpy_4");
  tcase_add_test(tc_memcpy_4, memcpy_4);
  suite_add_tcase(s, tc_memcpy_4);

  tc_memcpy_5 = tcase_create("memcpy_5");
  tcase_add_test(tc_memcpy_5, memcpy_5);
  suite_add_tcase(s, tc_memcpy_5);

  tc_memcpy_6 = tcase_create("memcpy_6");
  tcase_add_test(tc_memcpy_6, memcpy_6);
  suite_add_tcase(s, tc_memcpy_6);

  tc_memcpy_7 = tcase_create("memcpy_7");
  tcase_add_test(tc_memcpy_7, memcpy_7);
  suite_add_tcase(s, tc_memcpy_7);

  tc_memcpy_8 = tcase_create("memcpy_8");
  tcase_add_test(tc_memcpy_8, memcpy_8);
  suite_add_tcase(s, tc_memcpy_8);

  tc_memcpy_9 = tcase_create("memcpy_9");
  tcase_add_test(tc_memcpy_9, memcpy_9);
  suite_add_tcase(s, tc_memcpy_9);

  tc_memcpy_10 = tcase_create("memcpy_10");
  tcase_add_test(tc_memcpy_10, memcpy_10);
  suite_add_tcase(s, tc_memcpy_10);

  tc_memcpy_11 = tcase_create("memcpy_11");
  tcase_add_test(tc_memcpy_11, memcpy_11);
  suite_add_tcase(s, tc_memcpy_11);

  tc_memcpy_12 = tcase_create("memcpy_12");
  tcase_add_test(tc_memcpy_12, memcpy_12);
  suite_add_tcase(s, tc_memcpy_12);

  tc_memcpy_13 = tcase_create("memcpy_13");
  tcase_add_test(tc_memcpy_13, memcpy_13);
  suite_add_tcase(s, tc_memcpy_13);

  tc_memcpy_14 = tcase_create("memcpy_14");
  tcase_add_test(tc_memcpy_14, memcpy_14);
  suite_add_tcase(s, tc_memcpy_14);

  tc_memcpy_15 = tcase_create("memcpy_15");
  tcase_add_test(tc_memcpy_15, memcpy_15);
  suite_add_tcase(s, tc_memcpy_15);

  tc_memcpy_16 = tcase_create("memcpy_16");
  tcase_add_test(tc_memcpy_16, memcpy_16);
  suite_add_tcase(s, tc_memcpy_16);

  tc_memcpy_17 = tcase_create("memcpy_17");
  tcase_add_test(tc_memcpy_17, memcpy_17);
  suite_add_tcase(s, tc_memcpy_17);

  tc_memcpy_18 = tcase_create("memcpy_18");
  tcase_add_test(tc_memcpy_18, memcpy_18);
  suite_add_tcase(s, tc_memcpy_18);

  tc_memcpy_19 = tcase_create("memcpy_19");
  tcase_add_test(tc_memcpy_19, memcpy_19);
  suite_add_tcase(s, tc_memcpy_19);

  tc_memcpy_20 = tcase_create("memcpy_20");
  tcase_add_test(tc_memcpy_20, memcpy_20);
  suite_add_tcase(s, tc_memcpy_20);

  tc_memset_1 = tcase_create("memset_1");
  tcase_add_test(tc_memset_1, memset_1);
  suite_add_tcase(s, tc_memset_1);

  tc_memset_2 = tcase_create("memset_2");
  tcase_add_test(tc_memset_2, memset_2);
  suite_add_tcase(s, tc_memset_2);

  tc_memset_3 = tcase_create("memset_3");
  tcase_add_test(tc_memset_3, memset_3);
  suite_add_tcase(s, tc_memset_3);

  tc_memset_4 = tcase_create("memset_4");
  tcase_add_test(tc_memset_4, memset_4);
  suite_add_tcase(s, tc_memset_4);

  tc_memset_5 = tcase_create("memset_5");
  tcase_add_test(tc_memset_5, memset_5);
  suite_add_tcase(s, tc_memset_5);

  tc_memset_6 = tcase_create("memset_6");
  tcase_add_test(tc_memset_6, memset_6);
  suite_add_tcase(s, tc_memset_6);

  tc_memset_7 = tcase_create("memset_7");
  tcase_add_test(tc_memset_7, memset_7);
  suite_add_tcase(s, tc_memset_7);

  tc_memset_8 = tcase_create("memset_8");
  tcase_add_test(tc_memset_8, memset_8);
  suite_add_tcase(s, tc_memset_8);

  tc_memset_9 = tcase_create("memset_9");
  tcase_add_test(tc_memset_9, memset_9);
  suite_add_tcase(s, tc_memset_9);

  tc_memset_10 = tcase_create("memset_10");
  tcase_add_test(tc_memset_10, memset_10);
  suite_add_tcase(s, tc_memset_10);

  tc_memset_11 = tcase_create("memset_11");
  tcase_add_test(tc_memset_11, memset_11);
  suite_add_tcase(s, tc_memset_11);

  tc_memset_12 = tcase_create("memset_12");
  tcase_add_test(tc_memset_12, memset_12);
  suite_add_tcase(s, tc_memset_12);

  tc_memset_13 = tcase_create("memset_13");
  tcase_add_test(tc_memset_13, memset_13);
  suite_add_tcase(s, tc_memset_13);

  tc_memset_14 = tcase_create("memset_14");
  tcase_add_test(tc_memset_14, memset_14);
  suite_add_tcase(s, tc_memset_14);

  tc_memset_15 = tcase_create("memset_15");
  tcase_add_test(tc_memset_15, memset_15);
  suite_add_tcase(s, tc_memset_15);

  tc_memset_16 = tcase_create("memset_16");
  tcase_add_test(tc_memset_16, memset_16);
  suite_add_tcase(s, tc_memset_16);

  tc_memset_17 = tcase_create("memset_17");
  tcase_add_test(tc_memset_17, memset_17);
  suite_add_tcase(s, tc_memset_17);

  tc_memset_18 = tcase_create("memset_18");
  tcase_add_test(tc_memset_18, memset_18);
  suite_add_tcase(s, tc_memset_18);

  tc_memset_19 = tcase_create("memset_19");
  tcase_add_test(tc_memset_19, memset_19);
  suite_add_tcase(s, tc_memset_19);

  tc_memset_20 = tcase_create("memset_20");
  tcase_add_test(tc_memset_20, memset_20);
  suite_add_tcase(s, tc_memset_20);

  tc_memset_21 = tcase_create("memset_21");
  tcase_add_test(tc_memset_21, memset_21);
  suite_add_tcase(s, tc_memset_21);

  tc_memset_22 = tcase_create("memset_22");
  tcase_add_test(tc_memset_22, memset_22);
  suite_add_tcase(s, tc_memset_22);

  tc_memset_23 = tcase_create("memset_23");
  tcase_add_test(tc_memset_23, memset_23);
  suite_add_tcase(s, tc_memset_23);

  tc_memset_24 = tcase_create("memset_24");
  tcase_add_test(tc_memset_24, memset_24);
  suite_add_tcase(s, tc_memset_24);

  tc_memset_25 = tcase_create("memset_25");
  tcase_add_test(tc_memset_25, memset_25);
  suite_add_tcase(s, tc_memset_25);

  tc_memset_26 = tcase_create("memset_26");
  tcase_add_test(tc_memset_26, memset_26);
  suite_add_tcase(s, tc_memset_26);

  tc_memset_27 = tcase_create("memset_27");
  tcase_add_test(tc_memset_27, memset_27);
  suite_add_tcase(s, tc_memset_27);

  tc_memset_28 = tcase_create("memset_28");
  tcase_add_test(tc_memset_28, memset_28);
  suite_add_tcase(s, tc_memset_28);

  tc_memset_29 = tcase_create("memset_29");
  tcase_add_test(tc_memset_29, memset_29);
  suite_add_tcase(s, tc_memset_29);

  tc_memset_30 = tcase_create("memset_30");
  tcase_add_test(tc_memset_30, memset_30);
  suite_add_tcase(s, tc_memset_30);

  tc_memset_31 = tcase_create("memset_31");
  tcase_add_test(tc_memset_31, memset_31);
  suite_add_tcase(s, tc_memset_31);

  tc_memset_32 = tcase_create("memset_32");
  tcase_add_test(tc_memset_32, memset_32);
  suite_add_tcase(s, tc_memset_32);

  tc_memset_33 = tcase_create("memset_33");
  tcase_add_test(tc_memset_33, memset_33);
  suite_add_tcase(s, tc_memset_33);

  tc_memset_34 = tcase_create("memset_34");
  tcase_add_test(tc_memset_34, memset_34);
  suite_add_tcase(s, tc_memset_34);

  tc_memset_35 = tcase_create("memset_35");
  tcase_add_test(tc_memset_35, memset_35);
  suite_add_tcase(s, tc_memset_35);

  tc_memset_36 = tcase_create("memset_36");
  tcase_add_test(tc_memset_36, memset_36);
  suite_add_tcase(s, tc_memset_36);

  tc_memset_37 = tcase_create("memset_37");
  tcase_add_test(tc_memset_37, memset_37);
  suite_add_tcase(s, tc_memset_37);

  tc_memset_38 = tcase_create("memset_38");
  tcase_add_test(tc_memset_38, memset_38);
  suite_add_tcase(s, tc_memset_38);

  tc_memset_39 = tcase_create("memset_39");
  tcase_add_test(tc_memset_39, memset_39);
  suite_add_tcase(s, tc_memset_39);

  tc_memset_40 = tcase_create("memset_40");
  tcase_add_test(tc_memset_40, memset_40);
  suite_add_tcase(s, tc_memset_40);

  tc_memset_41 = tcase_create("memset_41");
  tcase_add_test(tc_memset_41, memset_41);
  suite_add_tcase(s, tc_memset_41);

  tc_memset_42 = tcase_create("memset_42");
  tcase_add_test(tc_memset_42, memset_42);
  suite_add_tcase(s, tc_memset_42);

  tc_memset_43 = tcase_create("memset_43");
  tcase_add_test(tc_memset_43, memset_43);
  suite_add_tcase(s, tc_memset_43);

  tc_memset_44 = tcase_create("memset_44");
  tcase_add_test(tc_memset_44, memset_44);
  suite_add_tcase(s, tc_memset_44);

  tc_memset_45 = tcase_create("memset_45");
  tcase_add_test(tc_memset_45, memset_45);
  suite_add_tcase(s, tc_memset_45);

  tc_memset_46 = tcase_create("memset_46");
  tcase_add_test(tc_memset_46, memset_46);
  suite_add_tcase(s, tc_memset_46);

  tc_strncat_1 = tcase_create("strncat_1");
  tcase_add_test(tc_strncat_1, strncat_1);
  suite_add_tcase(s, tc_strncat_1);

  tc_strncat_2 = tcase_create("strncat_2");
  tcase_add_test(tc_strncat_2, strncat_2);
  suite_add_tcase(s, tc_strncat_2);

  tc_strncat_3 = tcase_create("strncat_3");
  tcase_add_test(tc_strncat_3, strncat_3);
  suite_add_tcase(s, tc_strncat_3);

  tc_strncat_4 = tcase_create("strncat_4");
  tcase_add_test(tc_strncat_4, strncat_4);
  suite_add_tcase(s, tc_strncat_4);

  tc_strncat_5 = tcase_create("strncat_5");
  tcase_add_test(tc_strncat_5, strncat_5);
  suite_add_tcase(s, tc_strncat_5);

  tc_strncat_6 = tcase_create("strncat_6");
  tcase_add_test(tc_strncat_6, strncat_6);
  suite_add_tcase(s, tc_strncat_6);

  tc_strncat_7 = tcase_create("strncat_7");
  tcase_add_test(tc_strncat_7, strncat_7);
  suite_add_tcase(s, tc_strncat_7);

  tc_strncat_8 = tcase_create("strncat_8");
  tcase_add_test(tc_strncat_8, strncat_8);
  suite_add_tcase(s, tc_strncat_8);

  tc_strncat_9 = tcase_create("strncat_9");
  tcase_add_test(tc_strncat_9, strncat_9);
  suite_add_tcase(s, tc_strncat_9);

  tc_strncat_10 = tcase_create("strncat_10");
  tcase_add_test(tc_strncat_10, strncat_10);
  suite_add_tcase(s, tc_strncat_10);

  tc_strncat_11 = tcase_create("strncat_11");
  tcase_add_test(tc_strncat_11, strncat_11);
  suite_add_tcase(s, tc_strncat_11);

  tc_strncat_12 = tcase_create("strncat_12");
  tcase_add_test(tc_strncat_12, strncat_12);
  suite_add_tcase(s, tc_strncat_12);

  tc_strncat_13 = tcase_create("strncat_13");
  tcase_add_test(tc_strncat_13, strncat_13);
  suite_add_tcase(s, tc_strncat_13);

  tc_strncat_14 = tcase_create("strncat_14");
  tcase_add_test(tc_strncat_14, strncat_14);
  suite_add_tcase(s, tc_strncat_14);

  tc_strncat_20 = tcase_create("strncat_20");
  tcase_add_test(tc_strncat_20, strncat_20);
  suite_add_tcase(s, tc_strncat_20);

  tc_strchr_1 = tcase_create("strchr_1");
  tcase_add_test(tc_strchr_1, strchr_1);
  suite_add_tcase(s, tc_strchr_1);

  tc_strchr_2 = tcase_create("strchr_2");
  tcase_add_test(tc_strchr_2, strchr_2);
  suite_add_tcase(s, tc_strchr_2);

  tc_strchr_3 = tcase_create("strchr_3");
  tcase_add_test(tc_strchr_3, strchr_3);
  suite_add_tcase(s, tc_strchr_3);

  tc_strchr_4 = tcase_create("strchr_4");
  tcase_add_test(tc_strchr_4, strchr_4);
  suite_add_tcase(s, tc_strchr_4);

  tc_strchr_5 = tcase_create("strchr_5");
  tcase_add_test(tc_strchr_5, strchr_5);
  suite_add_tcase(s, tc_strchr_5);

  tc_strchr_6 = tcase_create("strchr_6");
  tcase_add_test(tc_strchr_6, strchr_6);
  suite_add_tcase(s, tc_strchr_6);

  tc_strchr_7 = tcase_create("strchr_7");
  tcase_add_test(tc_strchr_7, strchr_7);
  suite_add_tcase(s, tc_strchr_7);

  tc_strchr_8 = tcase_create("strchr_8");
  tcase_add_test(tc_strchr_8, strchr_8);
  suite_add_tcase(s, tc_strchr_8);

  tc_strchr_9 = tcase_create("strchr_9");
  tcase_add_test(tc_strchr_9, strchr_9);
  suite_add_tcase(s, tc_strchr_9);

  tc_strchr_10 = tcase_create("strchr_10");
  tcase_add_test(tc_strchr_10, strchr_10);
  suite_add_tcase(s, tc_strchr_10);

  tc_strchr_11 = tcase_create("strchr_11");
  tcase_add_test(tc_strchr_11, strchr_11);
  suite_add_tcase(s, tc_strchr_11);

  tc_strchr_12 = tcase_create("strchr_12");
  tcase_add_test(tc_strchr_12, strchr_12);
  suite_add_tcase(s, tc_strchr_12);

  tc_strchr_13 = tcase_create("strchr_13");
  tcase_add_test(tc_strchr_13, strchr_13);
  suite_add_tcase(s, tc_strchr_13);

  tc_strchr_14 = tcase_create("strchr_14");
  tcase_add_test(tc_strchr_14, strchr_14);
  suite_add_tcase(s, tc_strchr_14);

  tc_strchr_15 = tcase_create("strchr_15");
  tcase_add_test(tc_strchr_15, strchr_15);
  suite_add_tcase(s, tc_strchr_15);

  tc_strchr_16 = tcase_create("strchr_16");
  tcase_add_test(tc_strchr_16, strchr_16);
  suite_add_tcase(s, tc_strchr_16);

  tc_strchr_17 = tcase_create("strchr_17");
  tcase_add_test(tc_strchr_17, strchr_17);
  suite_add_tcase(s, tc_strchr_17);

  tc_strchr_18 = tcase_create("strchr_18");
  tcase_add_test(tc_strchr_18, strchr_18);
  suite_add_tcase(s, tc_strchr_18);

  tc_strchr_19 = tcase_create("strchr_19");
  tcase_add_test(tc_strchr_19, strchr_19);
  suite_add_tcase(s, tc_strchr_19);

  tc_strchr_20 = tcase_create("strchr_20");
  tcase_add_test(tc_strchr_20, strchr_20);
  suite_add_tcase(s, tc_strchr_20);

  tc_strchr_21 = tcase_create("strchr_21");
  tcase_add_test(tc_strchr_21, strchr_21);
  suite_add_tcase(s, tc_strchr_21);

  tc_strncmp_1 = tcase_create("strncmp_1");
  tcase_add_test(tc_strncmp_1, strncmp_1);
  suite_add_tcase(s, tc_strncmp_1);

  TCase *tc_strncpy_1, *tc_strncpy_2, *tc_strncpy_3, *tc_strncpy_4,
      *tc_strncpy_5, *tc_strncpy_6, *tc_strncpy_7, *tc_strncpy_8, *tc_strncpy_9,
      *tc_strncpy_10, *tc_strncpy_11, *tc_strncpy_12, *tc_strncpy_13,
      *tc_strncpy_14, *tc_strncpy_15, *tc_strncpy_16, *tc_strncpy_17,
      *tc_strncpy_18, *tc_strncpy_19, *tc_strncpy_20;

  tc_strncpy_1 = tcase_create("strncpy_1");
  tcase_add_test(tc_strncpy_1, strncpy_1);
  suite_add_tcase(s, tc_strncpy_1);

  tc_strncpy_2 = tcase_create("strncpy_2");
  tcase_add_test(tc_strncpy_2, strncpy_2);
  suite_add_tcase(s, tc_strncpy_2);

  tc_strncpy_3 = tcase_create("strncpy_3");
  tcase_add_test(tc_strncpy_3, strncpy_3);
  suite_add_tcase(s, tc_strncpy_3);

  tc_strncpy_4 = tcase_create("strncpy_4");
  tcase_add_test(tc_strncpy_4, strncpy_4);
  suite_add_tcase(s, tc_strncpy_4);

  tc_strncpy_5 = tcase_create("strncpy_5");
  tcase_add_test(tc_strncpy_5, strncpy_5);
  suite_add_tcase(s, tc_strncpy_5);

  tc_strncpy_6 = tcase_create("strncpy_6");
  tcase_add_test(tc_strncpy_6, strncpy_6);
  suite_add_tcase(s, tc_strncpy_6);

  tc_strncpy_7 = tcase_create("strncpy_7");
  tcase_add_test(tc_strncpy_7, strncpy_7);
  suite_add_tcase(s, tc_strncpy_7);

  tc_strncpy_8 = tcase_create("strncpy_8");
  tcase_add_test(tc_strncpy_8, strncpy_8);
  suite_add_tcase(s, tc_strncpy_8);

  tc_strncpy_9 = tcase_create("strncpy_9");
  tcase_add_test(tc_strncpy_9, strncpy_9);
  suite_add_tcase(s, tc_strncpy_9);

  tc_strncpy_10 = tcase_create("strncpy_10");
  tcase_add_test(tc_strncpy_10, strncpy_10);
  suite_add_tcase(s, tc_strncpy_10);

  tc_strncpy_11 = tcase_create("strncpy_11");
  tcase_add_test(tc_strncpy_11, strncpy_11);
  suite_add_tcase(s, tc_strncpy_11);

  tc_strncpy_12 = tcase_create("strncpy_12");
  tcase_add_test(tc_strncpy_12, strncpy_12);
  suite_add_tcase(s, tc_strncpy_12);

  tc_strncpy_13 = tcase_create("strncpy_13");
  tcase_add_test(tc_strncpy_13, strncpy_13);
  suite_add_tcase(s, tc_strncpy_13);

  tc_strncpy_14 = tcase_create("strncpy_14");
  tcase_add_test(tc_strncpy_14, strncpy_14);
  suite_add_tcase(s, tc_strncpy_14);

  tc_strncpy_15 = tcase_create("strncpy_15");
  tcase_add_test(tc_strncpy_15, strncpy_15);
  suite_add_tcase(s, tc_strncpy_15);

  tc_strncpy_16 = tcase_create("strncpy_16");
  tcase_add_test(tc_strncpy_16, strncpy_16);
  suite_add_tcase(s, tc_strncpy_16);

  tc_strncpy_17 = tcase_create("strncpy_17");
  tcase_add_test(tc_strncpy_17, strncpy_17);
  suite_add_tcase(s, tc_strncpy_17);

  tc_strncpy_18 = tcase_create("strncpy_18");
  tcase_add_test(tc_strncpy_18, strncpy_18);
  suite_add_tcase(s, tc_strncpy_18);

  tc_strncpy_19 = tcase_create("strncpy_19");
  tcase_add_test(tc_strncpy_19, strncpy_19);
  suite_add_tcase(s, tc_strncpy_19);

  tc_strncpy_20 = tcase_create("strncpy_20");
  tcase_add_test(tc_strncpy_20, strncpy_20);
  suite_add_tcase(s, tc_strncpy_20);

  TCase *tc_strcspn_1, *tc_strcspn_2, *tc_strcspn_3, *tc_strcspn_4,
      *tc_strcspn_5, *tc_strcspn_6, *tc_strcspn_7, *tc_strcspn_8, *tc_strcspn_9,
      *tc_strcspn_10, *tc_strcspn_11, *tc_strcspn_12, *tc_strcspn_13,
      *tc_strcspn_14, *tc_strcspn_15, *tc_strcspn_16, *tc_strcspn_17,
      *tc_strcspn_18, *tc_strcspn_19, *tc_strcspn_20, *tc_strcspn_21,
      *tc_strcspn_22, *tc_strcspn_23, *tc_strcspn_24, *tc_strcspn_25,
      *tc_strcspn_26, *tc_strcspn_27, *tc_strcspn_28, *tc_strcspn_29,
      *tc_strcspn_30;

  tc_strcspn_1 = tcase_create("strcspn_1");
  tcase_add_test(tc_strcspn_1, strcspn_1);
  suite_add_tcase(s, tc_strcspn_1);

  tc_strcspn_2 = tcase_create("strcspn_2");
  tcase_add_test(tc_strcspn_2, strcspn_2);
  suite_add_tcase(s, tc_strcspn_2);

  tc_strcspn_3 = tcase_create("strcspn_3");
  tcase_add_test(tc_strcspn_3, strcspn_3);
  suite_add_tcase(s, tc_strcspn_3);

  tc_strcspn_4 = tcase_create("strcspn_4");
  tcase_add_test(tc_strcspn_4, strcspn_4);
  suite_add_tcase(s, tc_strcspn_4);

  tc_strcspn_5 = tcase_create("strcspn_5");
  tcase_add_test(tc_strcspn_5, strcspn_5);
  suite_add_tcase(s, tc_strcspn_5);

  tc_strcspn_6 = tcase_create("strcspn_6");
  tcase_add_test(tc_strcspn_6, strcspn_6);
  suite_add_tcase(s, tc_strcspn_6);

  tc_strcspn_7 = tcase_create("strcspn_7");
  tcase_add_test(tc_strcspn_7, strcspn_7);
  suite_add_tcase(s, tc_strcspn_7);

  tc_strcspn_8 = tcase_create("strcspn_8");
  tcase_add_test(tc_strcspn_8, strcspn_8);
  suite_add_tcase(s, tc_strcspn_8);

  tc_strcspn_9 = tcase_create("strcspn_9");
  tcase_add_test(tc_strcspn_9, strcspn_9);
  suite_add_tcase(s, tc_strcspn_9);

  tc_strcspn_10 = tcase_create("strcspn_10");
  tcase_add_test(tc_strcspn_10, strcspn_10);
  suite_add_tcase(s, tc_strcspn_10);

  tc_strcspn_11 = tcase_create("strcspn_11");
  tcase_add_test(tc_strcspn_11, strcspn_11);
  suite_add_tcase(s, tc_strcspn_11);

  tc_strcspn_12 = tcase_create("strcspn_12");
  tcase_add_test(tc_strcspn_12, strcspn_12);
  suite_add_tcase(s, tc_strcspn_12);

  tc_strcspn_13 = tcase_create("strcspn_13");
  tcase_add_test(tc_strcspn_13, strcspn_13);
  suite_add_tcase(s, tc_strcspn_13);

  tc_strcspn_14 = tcase_create("strcspn_14");
  tcase_add_test(tc_strcspn_14, strcspn_14);
  suite_add_tcase(s, tc_strcspn_14);

  tc_strcspn_15 = tcase_create("strcspn_15");
  tcase_add_test(tc_strcspn_15, strcspn_15);
  suite_add_tcase(s, tc_strcspn_15);

  tc_strcspn_16 = tcase_create("strcspn_16");
  tcase_add_test(tc_strcspn_16, strcspn_16);
  suite_add_tcase(s, tc_strcspn_16);

  tc_strcspn_17 = tcase_create("strcspn_17");
  tcase_add_test(tc_strcspn_17, strcspn_17);
  suite_add_tcase(s, tc_strcspn_17);

  tc_strcspn_18 = tcase_create("strcspn_18");
  tcase_add_test(tc_strcspn_18, strcspn_18);
  suite_add_tcase(s, tc_strcspn_18);

  tc_strcspn_19 = tcase_create("strcspn_19");
  tcase_add_test(tc_strcspn_19, strcspn_19);
  suite_add_tcase(s, tc_strcspn_19);

  tc_strcspn_20 = tcase_create("strcspn_20");
  tcase_add_test(tc_strcspn_20, strcspn_20);
  suite_add_tcase(s, tc_strcspn_20);

  tc_strcspn_21 = tcase_create("strcspn_21");
  tcase_add_test(tc_strcspn_21, strcspn_21);
  suite_add_tcase(s, tc_strcspn_21);

  tc_strcspn_22 = tcase_create("strcspn_22");
  tcase_add_test(tc_strcspn_22, strcspn_22);
  suite_add_tcase(s, tc_strcspn_22);

  tc_strcspn_23 = tcase_create("strcspn_23");
  tcase_add_test(tc_strcspn_23, strcspn_23);
  suite_add_tcase(s, tc_strcspn_23);

  tc_strcspn_24 = tcase_create("strcspn_24");
  tcase_add_test(tc_strcspn_24, strcspn_24);
  suite_add_tcase(s, tc_strcspn_24);

  tc_strcspn_25 = tcase_create("strcspn_25");
  tcase_add_test(tc_strcspn_25, strcspn_25);
  suite_add_tcase(s, tc_strcspn_25);

  tc_strcspn_26 = tcase_create("strcspn_26");
  tcase_add_test(tc_strcspn_26, strcspn_26);
  suite_add_tcase(s, tc_strcspn_26);

  tc_strcspn_27 = tcase_create("strcspn_27");
  tcase_add_test(tc_strcspn_27, strcspn_27);
  suite_add_tcase(s, tc_strcspn_27);

  tc_strcspn_28 = tcase_create("strcspn_28");
  tcase_add_test(tc_strcspn_28, strcspn_28);
  suite_add_tcase(s, tc_strcspn_28);

  tc_strcspn_29 = tcase_create("strcspn_29");
  tcase_add_test(tc_strcspn_29, strcspn_29);
  suite_add_tcase(s, tc_strcspn_29);

  tc_strcspn_30 = tcase_create("strcspn_30");
  tcase_add_test(tc_strcspn_30, strcspn_30);
  suite_add_tcase(s, tc_strcspn_30);

  TCase *tc_strlen_1, *tc_strlen_2, *tc_strlen_3, *tc_strlen_4, *tc_strlen_5,
      *tc_strlen_6, *tc_strlen_7, *tc_strlen_8, *tc_strlen_9, *tc_strlen_10,
      *tc_strlen_11, *tc_strlen_12, *tc_strlen_13, *tc_strlen_14, *tc_strlen_15,
      *tc_strlen_16, *tc_strlen_17, *tc_strlen_18, *tc_strlen_19, *tc_strlen_20;

  tc_strlen_1 = tcase_create("strlen_1");
  tcase_add_test(tc_strlen_1, strlen_1);
  suite_add_tcase(s, tc_strlen_1);

  tc_strlen_2 = tcase_create("strlen_2");
  tcase_add_test(tc_strlen_2, strlen_2);
  suite_add_tcase(s, tc_strlen_2);

  tc_strlen_3 = tcase_create("strlen_3");
  tcase_add_test(tc_strlen_3, strlen_3);
  suite_add_tcase(s, tc_strlen_3);

  tc_strlen_4 = tcase_create("strlen_4");
  tcase_add_test(tc_strlen_4, strlen_4);
  suite_add_tcase(s, tc_strlen_4);

  tc_strlen_5 = tcase_create("strlen_5");
  tcase_add_test(tc_strlen_5, strlen_5);
  suite_add_tcase(s, tc_strlen_5);

  tc_strlen_6 = tcase_create("strlen_6");
  tcase_add_test(tc_strlen_6, strlen_6);
  suite_add_tcase(s, tc_strlen_6);

  tc_strlen_7 = tcase_create("strlen_7");
  tcase_add_test(tc_strlen_7, strlen_7);
  suite_add_tcase(s, tc_strlen_7);

  tc_strlen_8 = tcase_create("strlen_8");
  tcase_add_test(tc_strlen_8, strlen_8);
  suite_add_tcase(s, tc_strlen_8);

  tc_strlen_9 = tcase_create("strlen_9");
  tcase_add_test(tc_strlen_9, strlen_9);
  suite_add_tcase(s, tc_strlen_9);

  tc_strlen_10 = tcase_create("strlen_10");
  tcase_add_test(tc_strlen_10, strlen_10);
  suite_add_tcase(s, tc_strlen_10);

  tc_strlen_11 = tcase_create("strlen_11");
  tcase_add_test(tc_strlen_11, strlen_11);
  suite_add_tcase(s, tc_strlen_11);

  tc_strlen_12 = tcase_create("strlen_12");
  tcase_add_test(tc_strlen_12, strlen_12);
  suite_add_tcase(s, tc_strlen_12);

  tc_strlen_13 = tcase_create("strlen_13");
  tcase_add_test(tc_strlen_13, strlen_13);
  suite_add_tcase(s, tc_strlen_13);

  tc_strlen_14 = tcase_create("strlen_14");
  tcase_add_test(tc_strlen_14, strlen_14);
  suite_add_tcase(s, tc_strlen_14);

  tc_strlen_15 = tcase_create("strlen_15");
  tcase_add_test(tc_strlen_15, strlen_15);
  suite_add_tcase(s, tc_strlen_15);

  tc_strlen_16 = tcase_create("strlen_16");
  tcase_add_test(tc_strlen_16, strlen_16);
  suite_add_tcase(s, tc_strlen_16);

  tc_strlen_17 = tcase_create("strlen_17");
  tcase_add_test(tc_strlen_17, strlen_17);
  suite_add_tcase(s, tc_strlen_17);

  tc_strlen_18 = tcase_create("strlen_18");
  tcase_add_test(tc_strlen_18, strlen_18);
  suite_add_tcase(s, tc_strlen_18);

  tc_strlen_19 = tcase_create("strlen_19");
  tcase_add_test(tc_strlen_19, strlen_19);
  suite_add_tcase(s, tc_strlen_19);

  tc_strlen_20 = tcase_create("strlen_20");
  tcase_add_test(tc_strlen_20, strlen_20);
  suite_add_tcase(s, tc_strlen_20);

  TCase *tc_strpbrk_1, *tc_strpbrk_2, *tc_strpbrk_3, *tc_strpbrk_4,
      *tc_strpbrk_5, *tc_strpbrk_6, *tc_strpbrk_7, *tc_strpbrk_8, *tc_strpbrk_9,
      *tc_strpbrk_10, *tc_strpbrk_11, *tc_strpbrk_12, *tc_strpbrk_13,
      *tc_strpbrk_14, *tc_strpbrk_15, *tc_strpbrk_16, *tc_strpbrk_17,
      *tc_strpbrk_18, *tc_strpbrk_19, *tc_strpbrk_20, *tc_strpbrk_21,
      *tc_strpbrk_22, *tc_strpbrk_23, *tc_strpbrk_24, *tc_strpbrk_25,
      *tc_strpbrk_26, *tc_strpbrk_27, *tc_strpbrk_28, *tc_strpbrk_29,
      *tc_strpbrk_30, *tc_strpbrk_31, *tc_strpbrk_32, *tc_strpbrk_33,
      *tc_strpbrk_34, *tc_strpbrk_35, *tc_strpbrk_36, *tc_strpbrk_37,
      *tc_strpbrk_38, *tc_strpbrk_39, *tc_strpbrk_40;

  tc_strpbrk_1 = tcase_create("strpbrk_1");
  tcase_add_test(tc_strpbrk_1, strpbrk_1);
  suite_add_tcase(s, tc_strpbrk_1);

  tc_strpbrk_2 = tcase_create("strpbrk_2");
  tcase_add_test(tc_strpbrk_2, strpbrk_2);
  suite_add_tcase(s, tc_strpbrk_2);

  tc_strpbrk_3 = tcase_create("strpbrk_3");
  tcase_add_test(tc_strpbrk_3, strpbrk_3);
  suite_add_tcase(s, tc_strpbrk_3);

  tc_strpbrk_4 = tcase_create("strpbrk_4");
  tcase_add_test(tc_strpbrk_4, strpbrk_4);
  suite_add_tcase(s, tc_strpbrk_4);

  tc_strpbrk_5 = tcase_create("strpbrk_5");
  tcase_add_test(tc_strpbrk_5, strpbrk_5);
  suite_add_tcase(s, tc_strpbrk_5);

  tc_strpbrk_6 = tcase_create("strpbrk_6");
  tcase_add_test(tc_strpbrk_6, strpbrk_6);
  suite_add_tcase(s, tc_strpbrk_6);

  tc_strpbrk_7 = tcase_create("strpbrk_7");
  tcase_add_test(tc_strpbrk_7, strpbrk_7);
  suite_add_tcase(s, tc_strpbrk_7);

  tc_strpbrk_8 = tcase_create("strpbrk_8");
  tcase_add_test(tc_strpbrk_8, strpbrk_8);
  suite_add_tcase(s, tc_strpbrk_8);

  tc_strpbrk_9 = tcase_create("strpbrk_9");
  tcase_add_test(tc_strpbrk_9, strpbrk_9);
  suite_add_tcase(s, tc_strpbrk_9);

  tc_strpbrk_10 = tcase_create("strpbrk_10");
  tcase_add_test(tc_strpbrk_10, strpbrk_10);
  suite_add_tcase(s, tc_strpbrk_10);

  tc_strpbrk_11 = tcase_create("strpbrk_11");
  tcase_add_test(tc_strpbrk_11, strpbrk_11);
  suite_add_tcase(s, tc_strpbrk_11);

  tc_strpbrk_12 = tcase_create("strpbrk_12");
  tcase_add_test(tc_strpbrk_12, strpbrk_12);
  suite_add_tcase(s, tc_strpbrk_12);

  tc_strpbrk_13 = tcase_create("strpbrk_13");
  tcase_add_test(tc_strpbrk_13, strpbrk_13);
  suite_add_tcase(s, tc_strpbrk_13);

  tc_strpbrk_14 = tcase_create("strpbrk_14");
  tcase_add_test(tc_strpbrk_14, strpbrk_14);
  suite_add_tcase(s, tc_strpbrk_14);

  tc_strpbrk_15 = tcase_create("strpbrk_15");
  tcase_add_test(tc_strpbrk_15, strpbrk_15);
  suite_add_tcase(s, tc_strpbrk_15);

  tc_strpbrk_16 = tcase_create("strpbrk_16");
  tcase_add_test(tc_strpbrk_16, strpbrk_16);
  suite_add_tcase(s, tc_strpbrk_16);

  tc_strpbrk_17 = tcase_create("strpbrk_17");
  tcase_add_test(tc_strpbrk_17, strpbrk_17);
  suite_add_tcase(s, tc_strpbrk_17);

  tc_strpbrk_18 = tcase_create("strpbrk_18");
  tcase_add_test(tc_strpbrk_18, strpbrk_18);
  suite_add_tcase(s, tc_strpbrk_18);

  tc_strpbrk_19 = tcase_create("strpbrk_19");
  tcase_add_test(tc_strpbrk_19, strpbrk_19);
  suite_add_tcase(s, tc_strpbrk_19);

  tc_strpbrk_20 = tcase_create("strpbrk_20");
  tcase_add_test(tc_strpbrk_20, strpbrk_20);
  suite_add_tcase(s, tc_strpbrk_20);

  tc_strpbrk_21 = tcase_create("strpbrk_21");
  tcase_add_test(tc_strpbrk_21, strpbrk_21);
  suite_add_tcase(s, tc_strpbrk_21);

  tc_strpbrk_22 = tcase_create("strpbrk_22");
  tcase_add_test(tc_strpbrk_22, strpbrk_22);
  suite_add_tcase(s, tc_strpbrk_22);

  tc_strpbrk_23 = tcase_create("strpbrk_23");
  tcase_add_test(tc_strpbrk_23, strpbrk_23);
  suite_add_tcase(s, tc_strpbrk_23);

  tc_strpbrk_24 = tcase_create("strpbrk_24");
  tcase_add_test(tc_strpbrk_24, strpbrk_24);
  suite_add_tcase(s, tc_strpbrk_24);

  tc_strpbrk_25 = tcase_create("strpbrk_25");
  tcase_add_test(tc_strpbrk_25, strpbrk_25);
  suite_add_tcase(s, tc_strpbrk_25);

  tc_strpbrk_26 = tcase_create("strpbrk_26");
  tcase_add_test(tc_strpbrk_26, strpbrk_26);
  suite_add_tcase(s, tc_strpbrk_26);

  tc_strpbrk_27 = tcase_create("strpbrk_27");
  tcase_add_test(tc_strpbrk_27, strpbrk_27);
  suite_add_tcase(s, tc_strpbrk_27);

  tc_strpbrk_28 = tcase_create("strpbrk_28");
  tcase_add_test(tc_strpbrk_28, strpbrk_28);
  suite_add_tcase(s, tc_strpbrk_28);

  tc_strpbrk_29 = tcase_create("strpbrk_29");
  tcase_add_test(tc_strpbrk_29, strpbrk_29);
  suite_add_tcase(s, tc_strpbrk_29);

  tc_strpbrk_30 = tcase_create("strpbrk_30");
  tcase_add_test(tc_strpbrk_30, strpbrk_30);
  suite_add_tcase(s, tc_strpbrk_30);

  tc_strpbrk_31 = tcase_create("strpbrk_31");
  tcase_add_test(tc_strpbrk_31, strpbrk_31);
  suite_add_tcase(s, tc_strpbrk_31);

  tc_strpbrk_32 = tcase_create("strpbrk_32");
  tcase_add_test(tc_strpbrk_32, strpbrk_32);
  suite_add_tcase(s, tc_strpbrk_32);

  tc_strpbrk_33 = tcase_create("strpbrk_33");
  tcase_add_test(tc_strpbrk_33, strpbrk_33);
  suite_add_tcase(s, tc_strpbrk_33);

  tc_strpbrk_34 = tcase_create("strpbrk_34");
  tcase_add_test(tc_strpbrk_34, strpbrk_34);
  suite_add_tcase(s, tc_strpbrk_34);

  tc_strpbrk_35 = tcase_create("strpbrk_35");
  tcase_add_test(tc_strpbrk_35, strpbrk_35);
  suite_add_tcase(s, tc_strpbrk_35);

  tc_strpbrk_36 = tcase_create("strpbrk_36");
  tcase_add_test(tc_strpbrk_36, strpbrk_36);
  suite_add_tcase(s, tc_strpbrk_36);

  tc_strpbrk_37 = tcase_create("strpbrk_37");
  tcase_add_test(tc_strpbrk_37, strpbrk_37);
  suite_add_tcase(s, tc_strpbrk_37);

  tc_strpbrk_38 = tcase_create("strpbrk_38");
  tcase_add_test(tc_strpbrk_38, strpbrk_38);
  suite_add_tcase(s, tc_strpbrk_38);

  tc_strpbrk_39 = tcase_create("strpbrk_39");
  tcase_add_test(tc_strpbrk_39, strpbrk_39);
  suite_add_tcase(s, tc_strpbrk_39);

  tc_strpbrk_40 = tcase_create("strpbrk_40");
  tcase_add_test(tc_strpbrk_40, strpbrk_40);
  suite_add_tcase(s, tc_strpbrk_40);

  TCase *tc_strrchr_1, *tc_strrchr_2, *tc_strrchr_3, *tc_strrchr_4,
      *tc_strrchr_5, *tc_strrchr_6, *tc_strrchr_7, *tc_strrchr_8, *tc_strrchr_9,
      *tc_strrchr_10, *tc_strrchr_11, *tc_strrchr_12, *tc_strrchr_13,
      *tc_strrchr_14, *tc_strrchr_15, *tc_strrchr_16, *tc_strrchr_17,
      *tc_strrchr_18, *tc_strrchr_19, *tc_strrchr_20;

  tc_strrchr_1 = tcase_create("strrchr_1");
  tcase_add_test(tc_strrchr_1, strrchr_1);
  suite_add_tcase(s, tc_strrchr_1);

  tc_strrchr_2 = tcase_create("strrchr_2");
  tcase_add_test(tc_strrchr_2, strrchr_2);
  suite_add_tcase(s, tc_strrchr_2);

  tc_strrchr_3 = tcase_create("strrchr_3");
  tcase_add_test(tc_strrchr_3, strrchr_3);
  suite_add_tcase(s, tc_strrchr_3);

  tc_strrchr_4 = tcase_create("strrchr_4");
  tcase_add_test(tc_strrchr_4, strrchr_4);
  suite_add_tcase(s, tc_strrchr_4);

  tc_strrchr_5 = tcase_create("strrchr_5");
  tcase_add_test(tc_strrchr_5, strrchr_5);
  suite_add_tcase(s, tc_strrchr_5);

  tc_strrchr_6 = tcase_create("strrchr_6");
  tcase_add_test(tc_strrchr_6, strrchr_6);
  suite_add_tcase(s, tc_strrchr_6);

  tc_strrchr_7 = tcase_create("strrchr_7");
  tcase_add_test(tc_strrchr_7, strrchr_7);
  suite_add_tcase(s, tc_strrchr_7);

  tc_strrchr_8 = tcase_create("strrchr_8");
  tcase_add_test(tc_strrchr_8, strrchr_8);
  suite_add_tcase(s, tc_strrchr_8);

  tc_strrchr_9 = tcase_create("strrchr_9");
  tcase_add_test(tc_strrchr_9, strrchr_9);
  suite_add_tcase(s, tc_strrchr_9);

  tc_strrchr_10 = tcase_create("strrchr_10");
  tcase_add_test(tc_strrchr_10, strrchr_10);
  suite_add_tcase(s, tc_strrchr_10);

  tc_strrchr_11 = tcase_create("strrchr_11");
  tcase_add_test(tc_strrchr_11, strrchr_11);
  suite_add_tcase(s, tc_strrchr_11);

  tc_strrchr_12 = tcase_create("strrchr_12");
  tcase_add_test(tc_strrchr_12, strrchr_12);
  suite_add_tcase(s, tc_strrchr_12);

  tc_strrchr_13 = tcase_create("strrchr_13");
  tcase_add_test(tc_strrchr_13, strrchr_13);
  suite_add_tcase(s, tc_strrchr_13);

  tc_strrchr_14 = tcase_create("strrchr_14");
  tcase_add_test(tc_strrchr_14, strrchr_14);
  suite_add_tcase(s, tc_strrchr_14);

  tc_strrchr_15 = tcase_create("strrchr_15");
  tcase_add_test(tc_strrchr_15, strrchr_15);
  suite_add_tcase(s, tc_strrchr_15);

  tc_strrchr_16 = tcase_create("strrchr_16");
  tcase_add_test(tc_strrchr_16, strrchr_16);
  suite_add_tcase(s, tc_strrchr_16);

  tc_strrchr_17 = tcase_create("strrchr_17");
  tcase_add_test(tc_strrchr_17, strrchr_17);
  suite_add_tcase(s, tc_strrchr_17);

  tc_strrchr_18 = tcase_create("strrchr_18");
  tcase_add_test(tc_strrchr_18, strrchr_18);
  suite_add_tcase(s, tc_strrchr_18);

  tc_strrchr_19 = tcase_create("strrchr_19");
  tcase_add_test(tc_strrchr_19, strrchr_19);
  suite_add_tcase(s, tc_strrchr_19);

  tc_strrchr_20 = tcase_create("strrchr_20");
  tcase_add_test(tc_strrchr_20, strrchr_20);
  suite_add_tcase(s, tc_strrchr_20);

  TCase *tc_strstr_1, *tc_strstr_2, *tc_strstr_3, *tc_strstr_4, *tc_strstr_5,
      *tc_strstr_6, *tc_strstr_7, *tc_strstr_8, *tc_strstr_9, *tc_strstr_10,
      *tc_strstr_11, *tc_strstr_12, *tc_strstr_13, *tc_strstr_14, *tc_strstr_15,
      *tc_strstr_16, *tc_strstr_17, *tc_strstr_18, *tc_strstr_19, *tc_strstr_20,
      *tc_strstr_21, *tc_strstr_22, *tc_strstr_23, *tc_strstr_24, *tc_strstr_25,
      *tc_strstr_26, *tc_strstr_27, *tc_strstr_28, *tc_strstr_29, *tc_strstr_30,
      *tc_strstr_31, *tc_strstr_32, *tc_strstr_33, *tc_strstr_34, *tc_strstr_35,
      *tc_strstr_36;

  tc_strstr_1 = tcase_create("strstr_1");
  tcase_add_test(tc_strstr_1, strstr_1);
  suite_add_tcase(s, tc_strstr_1);

  tc_strstr_2 = tcase_create("strstr_2");
  tcase_add_test(tc_strstr_2, strstr_2);
  suite_add_tcase(s, tc_strstr_2);

  tc_strstr_3 = tcase_create("strstr_3");
  tcase_add_test(tc_strstr_3, strstr_3);
  suite_add_tcase(s, tc_strstr_3);

  tc_strstr_4 = tcase_create("strstr_4");
  tcase_add_test(tc_strstr_4, strstr_4);
  suite_add_tcase(s, tc_strstr_4);

  tc_strstr_5 = tcase_create("strstr_5");
  tcase_add_test(tc_strstr_5, strstr_5);
  suite_add_tcase(s, tc_strstr_5);

  tc_strstr_6 = tcase_create("strstr_6");
  tcase_add_test(tc_strstr_6, strstr_6);
  suite_add_tcase(s, tc_strstr_6);

  tc_strstr_7 = tcase_create("strstr_7");
  tcase_add_test(tc_strstr_7, strstr_7);
  suite_add_tcase(s, tc_strstr_7);

  tc_strstr_8 = tcase_create("strstr_8");
  tcase_add_test(tc_strstr_8, strstr_8);
  suite_add_tcase(s, tc_strstr_8);

  tc_strstr_9 = tcase_create("strstr_9");
  tcase_add_test(tc_strstr_9, strstr_9);
  suite_add_tcase(s, tc_strstr_9);

  tc_strstr_10 = tcase_create("strstr_10");
  tcase_add_test(tc_strstr_10, strstr_10);
  suite_add_tcase(s, tc_strstr_10);

  tc_strstr_11 = tcase_create("strstr_11");
  tcase_add_test(tc_strstr_11, strstr_11);
  suite_add_tcase(s, tc_strstr_11);

  tc_strstr_12 = tcase_create("strstr_12");
  tcase_add_test(tc_strstr_12, strstr_12);
  suite_add_tcase(s, tc_strstr_12);

  tc_strstr_13 = tcase_create("strstr_13");
  tcase_add_test(tc_strstr_13, strstr_13);
  suite_add_tcase(s, tc_strstr_13);

  tc_strstr_14 = tcase_create("strstr_14");
  tcase_add_test(tc_strstr_14, strstr_14);
  suite_add_tcase(s, tc_strstr_14);

  tc_strstr_15 = tcase_create("strstr_15");
  tcase_add_test(tc_strstr_15, strstr_15);
  suite_add_tcase(s, tc_strstr_15);

  tc_strstr_16 = tcase_create("strstr_16");
  tcase_add_test(tc_strstr_16, strstr_16);
  suite_add_tcase(s, tc_strstr_16);

  tc_strstr_17 = tcase_create("strstr_17");
  tcase_add_test(tc_strstr_17, strstr_17);
  suite_add_tcase(s, tc_strstr_17);

  tc_strstr_18 = tcase_create("strstr_18");
  tcase_add_test(tc_strstr_18, strstr_18);
  suite_add_tcase(s, tc_strstr_18);

  tc_strstr_19 = tcase_create("strstr_19");
  tcase_add_test(tc_strstr_19, strstr_19);
  suite_add_tcase(s, tc_strstr_19);

  tc_strstr_20 = tcase_create("strstr_20");
  tcase_add_test(tc_strstr_20, strstr_20);
  suite_add_tcase(s, tc_strstr_20);

  tc_strstr_21 = tcase_create("strstr_21");
  tcase_add_test(tc_strstr_21, strstr_21);
  suite_add_tcase(s, tc_strstr_21);

  tc_strstr_22 = tcase_create("strstr_22");
  tcase_add_test(tc_strstr_22, strstr_22);
  suite_add_tcase(s, tc_strstr_22);

  tc_strstr_23 = tcase_create("strstr_23");
  tcase_add_test(tc_strstr_23, strstr_23);
  suite_add_tcase(s, tc_strstr_23);

  tc_strstr_24 = tcase_create("strstr_24");
  tcase_add_test(tc_strstr_24, strstr_24);
  suite_add_tcase(s, tc_strstr_24);

  tc_strstr_25 = tcase_create("strstr_25");
  tcase_add_test(tc_strstr_25, strstr_25);
  suite_add_tcase(s, tc_strstr_25);

  tc_strstr_26 = tcase_create("strstr_26");
  tcase_add_test(tc_strstr_26, strstr_26);
  suite_add_tcase(s, tc_strstr_26);

  tc_strstr_27 = tcase_create("strstr_27");
  tcase_add_test(tc_strstr_27, strstr_27);
  suite_add_tcase(s, tc_strstr_27);

  tc_strstr_28 = tcase_create("strstr_28");
  tcase_add_test(tc_strstr_28, strstr_28);
  suite_add_tcase(s, tc_strstr_28);

  tc_strstr_29 = tcase_create("strstr_29");
  tcase_add_test(tc_strstr_29, strstr_29);
  suite_add_tcase(s, tc_strstr_29);

  tc_strstr_30 = tcase_create("strstr_30");
  tcase_add_test(tc_strstr_30, strstr_30);
  suite_add_tcase(s, tc_strstr_30);

  tc_strstr_31 = tcase_create("strstr_31");
  tcase_add_test(tc_strstr_31, strstr_31);
  suite_add_tcase(s, tc_strstr_31);

  tc_strstr_32 = tcase_create("strstr_32");
  tcase_add_test(tc_strstr_32, strstr_32);
  suite_add_tcase(s, tc_strstr_32);

  tc_strstr_33 = tcase_create("strstr_33");
  tcase_add_test(tc_strstr_33, strstr_33);
  suite_add_tcase(s, tc_strstr_33);

  tc_strstr_34 = tcase_create("strstr_34");
  tcase_add_test(tc_strstr_34, strstr_34);
  suite_add_tcase(s, tc_strstr_34);

  tc_strstr_35 = tcase_create("strstr_35");
  tcase_add_test(tc_strstr_35, strstr_35);
  suite_add_tcase(s, tc_strstr_35);

  tc_strstr_36 = tcase_create("strstr_36");
  tcase_add_test(tc_strstr_36, strstr_36);
  suite_add_tcase(s, tc_strstr_36);

  TCase *tc_strtok_1, *tc_strtok_2, *tc_strtok_3, *tc_strtok_4, *tc_strtok_5,
      *tc_strtok_6, *tc_strtok_7, *tc_strtok_8, *tc_strtok_9, *tc_strtok_10,
      *tc_strtok_11, *tc_strtok_12, *tc_strtok_13, *tc_strtok_14, *tc_strtok_15,
      *tc_strtok_16, *tc_strtok_17, *tc_strtok_18, *tc_strtok_19, *tc_strtok_20,
      *tc_strtok_21, *tc_strtok_22, *tc_strtok_23, *tc_strtok_24, *tc_strtok_25,
      *tc_strtok_26, *tc_strtok_27, *tc_strtok_28, *tc_strtok_29, *tc_strtok_30;

  tc_strtok_1 = tcase_create("strtok_1");
  tcase_add_test(tc_strtok_1, strtok_1);
  suite_add_tcase(s, tc_strtok_1);

  tc_strtok_2 = tcase_create("strtok_2");
  tcase_add_test(tc_strtok_2, strtok_2);
  suite_add_tcase(s, tc_strtok_2);

  tc_strtok_3 = tcase_create("strtok_3");
  tcase_add_test(tc_strtok_3, strtok_3);
  suite_add_tcase(s, tc_strtok_3);

  tc_strtok_4 = tcase_create("strtok_4");
  tcase_add_test(tc_strtok_4, strtok_4);
  suite_add_tcase(s, tc_strtok_4);

  tc_strtok_5 = tcase_create("strtok_5");
  tcase_add_test(tc_strtok_5, strtok_5);
  suite_add_tcase(s, tc_strtok_5);

  tc_strtok_6 = tcase_create("strtok_6");
  tcase_add_test(tc_strtok_6, strtok_6);
  suite_add_tcase(s, tc_strtok_6);

  tc_strtok_7 = tcase_create("strtok_7");
  tcase_add_test(tc_strtok_7, strtok_7);
  suite_add_tcase(s, tc_strtok_7);

  tc_strtok_8 = tcase_create("strtok_8");
  tcase_add_test(tc_strtok_8, strtok_8);
  suite_add_tcase(s, tc_strtok_8);

  tc_strtok_9 = tcase_create("strtok_9");
  tcase_add_test(tc_strtok_9, strtok_9);
  suite_add_tcase(s, tc_strtok_9);

  tc_strtok_10 = tcase_create("strtok_10");
  tcase_add_test(tc_strtok_10, strtok_10);
  suite_add_tcase(s, tc_strtok_10);

  tc_strtok_11 = tcase_create("strtok_11");
  tcase_add_test(tc_strtok_11, strtok_11);
  suite_add_tcase(s, tc_strtok_11);

  tc_strtok_12 = tcase_create("strtok_12");
  tcase_add_test(tc_strtok_12, strtok_12);
  suite_add_tcase(s, tc_strtok_12);

  tc_strtok_13 = tcase_create("strtok_13");
  tcase_add_test(tc_strtok_13, strtok_13);
  suite_add_tcase(s, tc_strtok_13);

  tc_strtok_14 = tcase_create("strtok_14");
  tcase_add_test(tc_strtok_14, strtok_14);
  suite_add_tcase(s, tc_strtok_14);

  tc_strtok_15 = tcase_create("strtok_15");
  tcase_add_test(tc_strtok_15, strtok_15);
  suite_add_tcase(s, tc_strtok_15);

  tc_strtok_16 = tcase_create("strtok_16");
  tcase_add_test(tc_strtok_16, strtok_16);
  suite_add_tcase(s, tc_strtok_16);

  tc_strtok_17 = tcase_create("strtok_17");
  tcase_add_test(tc_strtok_17, strtok_17);
  suite_add_tcase(s, tc_strtok_17);

  tc_strtok_18 = tcase_create("strtok_18");
  tcase_add_test(tc_strtok_18, strtok_18);
  suite_add_tcase(s, tc_strtok_18);

  tc_strtok_19 = tcase_create("strtok_19");
  tcase_add_test(tc_strtok_19, strtok_19);
  suite_add_tcase(s, tc_strtok_19);

  tc_strtok_20 = tcase_create("strtok_20");
  tcase_add_test(tc_strtok_20, strtok_20);
  suite_add_tcase(s, tc_strtok_20);

  tc_strtok_21 = tcase_create("strtok_21");
  tcase_add_test(tc_strtok_21, strtok_21);
  suite_add_tcase(s, tc_strtok_21);

  tc_strtok_22 = tcase_create("strtok_22");
  tcase_add_test(tc_strtok_22, strtok_22);
  suite_add_tcase(s, tc_strtok_22);

  tc_strtok_23 = tcase_create("strtok_23");
  tcase_add_test(tc_strtok_23, strtok_23);
  suite_add_tcase(s, tc_strtok_23);

  tc_strtok_24 = tcase_create("strtok_24");
  tcase_add_test(tc_strtok_24, strtok_24);
  suite_add_tcase(s, tc_strtok_24);

  tc_strtok_25 = tcase_create("strtok_25");
  tcase_add_test(tc_strtok_25, strtok_25);
  suite_add_tcase(s, tc_strtok_25);

  tc_strtok_26 = tcase_create("strtok_26");
  tcase_add_test(tc_strtok_26, strtok_26);
  suite_add_tcase(s, tc_strtok_26);

  tc_strtok_27 = tcase_create("strtok_27");
  tcase_add_test(tc_strtok_27, strtok_27);
  suite_add_tcase(s, tc_strtok_27);

  tc_strtok_28 = tcase_create("strtok_28");
  tcase_add_test(tc_strtok_28, strtok_28);
  suite_add_tcase(s, tc_strtok_28);

  tc_strtok_29 = tcase_create("strtok_29");
  tcase_add_test(tc_strtok_29, strtok_29);
  suite_add_tcase(s, tc_strtok_29);

  tc_strtok_30 = tcase_create("strtok_30");
  tcase_add_test(tc_strtok_30, strtok_30);
  suite_add_tcase(s, tc_strtok_30);

  TCase *tc_strerror_0_1, *tc_strerror_0, *tc_strerror_1, *tc_strerror_2,
      *tc_strerror_3, *tc_strerror_4, *tc_strerror_5, *tc_strerror_6,
      *tc_strerror_7, *tc_strerror_8, *tc_strerror_9, *tc_strerror_10,
      *tc_strerror_11, *tc_strerror_12, *tc_strerror_13, *tc_strerror_14,
      *tc_strerror_15, *tc_strerror_16, *tc_strerror_17, *tc_strerror_18,
      *tc_strerror_19, *tc_strerror_20, *tc_strerror_21, *tc_strerror_22,
      *tc_strerror_23, *tc_strerror_24, *tc_strerror_25, *tc_strerror_26,
      *tc_strerror_27, *tc_strerror_28, *tc_strerror_29, *tc_strerror_30,
      *tc_strerror_31, *tc_strerror_32, *tc_strerror_33, *tc_strerror_34,
      *tc_strerror_35, *tc_strerror_36, *tc_strerror_37, *tc_strerror_38,
      *tc_strerror_39, *tc_strerror_40, *tc_strerror_41, *tc_strerror_42,
      *tc_strerror_43, *tc_strerror_44, *tc_strerror_45, *tc_strerror_46,
      *tc_strerror_47, *tc_strerror_48, *tc_strerror_49, *tc_strerror_50,
      *tc_strerror_51, *tc_strerror_52, *tc_strerror_53, *tc_strerror_54,
      *tc_strerror_55, *tc_strerror_56, *tc_strerror_57, *tc_strerror_58,
      *tc_strerror_59, *tc_strerror_60, *tc_strerror_61, *tc_strerror_62,
      *tc_strerror_63, *tc_strerror_64, *tc_strerror_65, *tc_strerror_66,
      *tc_strerror_67, *tc_strerror_68, *tc_strerror_69, *tc_strerror_70,
      *tc_strerror_71, *tc_strerror_72, *tc_strerror_73, *tc_strerror_74,
      *tc_strerror_75, *tc_strerror_76, *tc_strerror_77, *tc_strerror_78,
      *tc_strerror_79, *tc_strerror_80, *tc_strerror_81, *tc_strerror_82,
      *tc_strerror_83, *tc_strerror_84, *tc_strerror_85, *tc_strerror_86,
      *tc_strerror_87, *tc_strerror_88, *tc_strerror_89, *tc_strerror_90,
      *tc_strerror_91, *tc_strerror_92, *tc_strerror_93, *tc_strerror_94,
      *tc_strerror_95, *tc_strerror_96, *tc_strerror_97, *tc_strerror_98,
      *tc_strerror_99, *tc_strerror_100, *tc_strerror_101, *tc_strerror_102,
      *tc_strerror_103, *tc_strerror_104, *tc_strerror_105, *tc_strerror_106,
      *tc_strerror_107, *tc_strerror_108, *tc_strerror_109;

  tc_strerror_0_1 = tcase_create("strerror_0_1");
  tcase_add_test(tc_strerror_0_1, strerror_0_1);
  suite_add_tcase(s, tc_strerror_0_1);

  tc_strerror_0 = tcase_create("strerror_0");
  tcase_add_test(tc_strerror_0, strerror_0);
  suite_add_tcase(s, tc_strerror_0);

  tc_strerror_1 = tcase_create("strerror_1");
  tcase_add_test(tc_strerror_1, strerror_1);
  suite_add_tcase(s, tc_strerror_1);

  tc_strerror_2 = tcase_create("strerror_2");
  tcase_add_test(tc_strerror_2, strerror_2);
  suite_add_tcase(s, tc_strerror_2);

  tc_strerror_3 = tcase_create("strerror_3");
  tcase_add_test(tc_strerror_3, strerror_3);
  suite_add_tcase(s, tc_strerror_3);

  tc_strerror_4 = tcase_create("strerror_4");
  tcase_add_test(tc_strerror_4, strerror_4);
  suite_add_tcase(s, tc_strerror_4);

  tc_strerror_5 = tcase_create("strerror_5");
  tcase_add_test(tc_strerror_5, strerror_5);
  suite_add_tcase(s, tc_strerror_5);

  tc_strerror_6 = tcase_create("strerror_6");
  tcase_add_test(tc_strerror_6, strerror_6);
  suite_add_tcase(s, tc_strerror_6);

  tc_strerror_7 = tcase_create("strerror_7");
  tcase_add_test(tc_strerror_7, strerror_7);
  suite_add_tcase(s, tc_strerror_7);

  tc_strerror_8 = tcase_create("strerror_8");
  tcase_add_test(tc_strerror_8, strerror_8);
  suite_add_tcase(s, tc_strerror_8);

  tc_strerror_9 = tcase_create("strerror_9");
  tcase_add_test(tc_strerror_9, strerror_9);
  suite_add_tcase(s, tc_strerror_9);

  tc_strerror_10 = tcase_create("strerror_10");
  tcase_add_test(tc_strerror_10, strerror_10);
  suite_add_tcase(s, tc_strerror_10);

  tc_strerror_11 = tcase_create("strerror_11");
  tcase_add_test(tc_strerror_11, strerror_11);
  suite_add_tcase(s, tc_strerror_11);

  tc_strerror_12 = tcase_create("strerror_12");
  tcase_add_test(tc_strerror_12, strerror_12);
  suite_add_tcase(s, tc_strerror_12);

  tc_strerror_13 = tcase_create("strerror_13");
  tcase_add_test(tc_strerror_13, strerror_13);
  suite_add_tcase(s, tc_strerror_13);

  tc_strerror_14 = tcase_create("strerror_14");
  tcase_add_test(tc_strerror_14, strerror_14);
  suite_add_tcase(s, tc_strerror_14);

  tc_strerror_15 = tcase_create("strerror_15");
  tcase_add_test(tc_strerror_15, strerror_15);
  suite_add_tcase(s, tc_strerror_15);

  tc_strerror_16 = tcase_create("strerror_16");
  tcase_add_test(tc_strerror_16, strerror_16);
  suite_add_tcase(s, tc_strerror_16);

  tc_strerror_17 = tcase_create("strerror_17");
  tcase_add_test(tc_strerror_17, strerror_17);
  suite_add_tcase(s, tc_strerror_17);

  tc_strerror_18 = tcase_create("strerror_18");
  tcase_add_test(tc_strerror_18, strerror_18);
  suite_add_tcase(s, tc_strerror_18);

  tc_strerror_19 = tcase_create("strerror_19");
  tcase_add_test(tc_strerror_19, strerror_19);
  suite_add_tcase(s, tc_strerror_19);

  tc_strerror_20 = tcase_create("strerror_20");
  tcase_add_test(tc_strerror_20, strerror_20);
  suite_add_tcase(s, tc_strerror_20);

  tc_strerror_21 = tcase_create("strerror_21");
  tcase_add_test(tc_strerror_21, strerror_21);
  suite_add_tcase(s, tc_strerror_21);

  tc_strerror_22 = tcase_create("strerror_22");
  tcase_add_test(tc_strerror_22, strerror_22);
  suite_add_tcase(s, tc_strerror_22);

  tc_strerror_23 = tcase_create("strerror_23");
  tcase_add_test(tc_strerror_23, strerror_23);
  suite_add_tcase(s, tc_strerror_23);

  tc_strerror_24 = tcase_create("strerror_24");
  tcase_add_test(tc_strerror_24, strerror_24);
  suite_add_tcase(s, tc_strerror_24);

  tc_strerror_25 = tcase_create("strerror_25");
  tcase_add_test(tc_strerror_25, strerror_25);
  suite_add_tcase(s, tc_strerror_25);

  tc_strerror_26 = tcase_create("strerror_26");
  tcase_add_test(tc_strerror_26, strerror_26);
  suite_add_tcase(s, tc_strerror_26);

  tc_strerror_27 = tcase_create("strerror_27");
  tcase_add_test(tc_strerror_27, strerror_27);
  suite_add_tcase(s, tc_strerror_27);

  tc_strerror_28 = tcase_create("strerror_28");
  tcase_add_test(tc_strerror_28, strerror_28);
  suite_add_tcase(s, tc_strerror_28);

  tc_strerror_29 = tcase_create("strerror_29");
  tcase_add_test(tc_strerror_29, strerror_29);
  suite_add_tcase(s, tc_strerror_29);

  tc_strerror_30 = tcase_create("strerror_30");
  tcase_add_test(tc_strerror_30, strerror_30);
  suite_add_tcase(s, tc_strerror_30);

  tc_strerror_31 = tcase_create("strerror_31");
  tcase_add_test(tc_strerror_31, strerror_31);
  suite_add_tcase(s, tc_strerror_31);

  tc_strerror_32 = tcase_create("strerror_32");
  tcase_add_test(tc_strerror_32, strerror_32);
  suite_add_tcase(s, tc_strerror_32);

  tc_strerror_33 = tcase_create("strerror_33");
  tcase_add_test(tc_strerror_33, strerror_33);
  suite_add_tcase(s, tc_strerror_33);

  tc_strerror_34 = tcase_create("strerror_34");
  tcase_add_test(tc_strerror_34, strerror_34);
  suite_add_tcase(s, tc_strerror_34);

  tc_strerror_35 = tcase_create("strerror_35");
  tcase_add_test(tc_strerror_35, strerror_35);
  suite_add_tcase(s, tc_strerror_35);

  tc_strerror_36 = tcase_create("strerror_36");
  tcase_add_test(tc_strerror_36, strerror_36);
  suite_add_tcase(s, tc_strerror_36);

  tc_strerror_37 = tcase_create("strerror_37");
  tcase_add_test(tc_strerror_37, strerror_37);
  suite_add_tcase(s, tc_strerror_37);

  tc_strerror_38 = tcase_create("strerror_38");
  tcase_add_test(tc_strerror_38, strerror_38);
  suite_add_tcase(s, tc_strerror_38);

  tc_strerror_39 = tcase_create("strerror_39");
  tcase_add_test(tc_strerror_39, strerror_39);
  suite_add_tcase(s, tc_strerror_39);

  tc_strerror_40 = tcase_create("strerror_40");
  tcase_add_test(tc_strerror_40, strerror_40);
  suite_add_tcase(s, tc_strerror_40);

  tc_strerror_41 = tcase_create("strerror_41");
  tcase_add_test(tc_strerror_41, strerror_41);
  suite_add_tcase(s, tc_strerror_41);

  tc_strerror_42 = tcase_create("strerror_42");
  tcase_add_test(tc_strerror_42, strerror_42);
  suite_add_tcase(s, tc_strerror_42);

  tc_strerror_43 = tcase_create("strerror_43");
  tcase_add_test(tc_strerror_43, strerror_43);
  suite_add_tcase(s, tc_strerror_43);

  tc_strerror_44 = tcase_create("strerror_44");
  tcase_add_test(tc_strerror_44, strerror_44);
  suite_add_tcase(s, tc_strerror_44);

  tc_strerror_45 = tcase_create("strerror_45");
  tcase_add_test(tc_strerror_45, strerror_45);
  suite_add_tcase(s, tc_strerror_45);

  tc_strerror_46 = tcase_create("strerror_46");
  tcase_add_test(tc_strerror_46, strerror_46);
  suite_add_tcase(s, tc_strerror_46);

  tc_strerror_47 = tcase_create("strerror_47");
  tcase_add_test(tc_strerror_47, strerror_47);
  suite_add_tcase(s, tc_strerror_47);

  tc_strerror_48 = tcase_create("strerror_48");
  tcase_add_test(tc_strerror_48, strerror_48);
  suite_add_tcase(s, tc_strerror_48);

  tc_strerror_49 = tcase_create("strerror_49");
  tcase_add_test(tc_strerror_49, strerror_49);
  suite_add_tcase(s, tc_strerror_49);

  tc_strerror_50 = tcase_create("strerror_50");
  tcase_add_test(tc_strerror_50, strerror_50);
  suite_add_tcase(s, tc_strerror_50);

  tc_strerror_51 = tcase_create("strerror_51");
  tcase_add_test(tc_strerror_51, strerror_51);
  suite_add_tcase(s, tc_strerror_51);

  tc_strerror_52 = tcase_create("strerror_52");
  tcase_add_test(tc_strerror_52, strerror_52);
  suite_add_tcase(s, tc_strerror_52);

  tc_strerror_53 = tcase_create("strerror_53");
  tcase_add_test(tc_strerror_53, strerror_53);
  suite_add_tcase(s, tc_strerror_53);

  tc_strerror_54 = tcase_create("strerror_54");
  tcase_add_test(tc_strerror_54, strerror_54);
  suite_add_tcase(s, tc_strerror_54);

  tc_strerror_55 = tcase_create("strerror_55");
  tcase_add_test(tc_strerror_55, strerror_55);
  suite_add_tcase(s, tc_strerror_55);

  tc_strerror_56 = tcase_create("strerror_56");
  tcase_add_test(tc_strerror_56, strerror_56);
  suite_add_tcase(s, tc_strerror_56);

  tc_strerror_57 = tcase_create("strerror_57");
  tcase_add_test(tc_strerror_57, strerror_57);
  suite_add_tcase(s, tc_strerror_57);

  tc_strerror_58 = tcase_create("strerror_58");
  tcase_add_test(tc_strerror_58, strerror_58);
  suite_add_tcase(s, tc_strerror_58);

  tc_strerror_59 = tcase_create("strerror_59");
  tcase_add_test(tc_strerror_59, strerror_59);
  suite_add_tcase(s, tc_strerror_59);

  tc_strerror_60 = tcase_create("strerror_60");
  tcase_add_test(tc_strerror_60, strerror_60);
  suite_add_tcase(s, tc_strerror_60);

  tc_strerror_61 = tcase_create("strerror_61");
  tcase_add_test(tc_strerror_61, strerror_61);
  suite_add_tcase(s, tc_strerror_61);

  tc_strerror_62 = tcase_create("strerror_62");
  tcase_add_test(tc_strerror_62, strerror_62);
  suite_add_tcase(s, tc_strerror_62);

  tc_strerror_63 = tcase_create("strerror_63");
  tcase_add_test(tc_strerror_63, strerror_63);
  suite_add_tcase(s, tc_strerror_63);

  tc_strerror_64 = tcase_create("strerror_64");
  tcase_add_test(tc_strerror_64, strerror_64);
  suite_add_tcase(s, tc_strerror_64);

  tc_strerror_65 = tcase_create("strerror_65");
  tcase_add_test(tc_strerror_65, strerror_65);
  suite_add_tcase(s, tc_strerror_65);

  tc_strerror_66 = tcase_create("strerror_66");
  tcase_add_test(tc_strerror_66, strerror_66);
  suite_add_tcase(s, tc_strerror_66);

  tc_strerror_67 = tcase_create("strerror_67");
  tcase_add_test(tc_strerror_67, strerror_67);
  suite_add_tcase(s, tc_strerror_67);

  tc_strerror_68 = tcase_create("strerror_68");
  tcase_add_test(tc_strerror_68, strerror_68);
  suite_add_tcase(s, tc_strerror_68);

  tc_strerror_69 = tcase_create("strerror_69");
  tcase_add_test(tc_strerror_69, strerror_69);
  suite_add_tcase(s, tc_strerror_69);

  tc_strerror_70 = tcase_create("strerror_70");
  tcase_add_test(tc_strerror_70, strerror_70);
  suite_add_tcase(s, tc_strerror_70);

  tc_strerror_71 = tcase_create("strerror_71");
  tcase_add_test(tc_strerror_71, strerror_71);
  suite_add_tcase(s, tc_strerror_71);

  tc_strerror_72 = tcase_create("strerror_72");
  tcase_add_test(tc_strerror_72, strerror_72);
  suite_add_tcase(s, tc_strerror_72);

  tc_strerror_73 = tcase_create("strerror_73");
  tcase_add_test(tc_strerror_73, strerror_73);
  suite_add_tcase(s, tc_strerror_73);

  tc_strerror_74 = tcase_create("strerror_74");
  tcase_add_test(tc_strerror_74, strerror_74);
  suite_add_tcase(s, tc_strerror_74);

  tc_strerror_75 = tcase_create("strerror_75");
  tcase_add_test(tc_strerror_75, strerror_75);
  suite_add_tcase(s, tc_strerror_75);

  tc_strerror_76 = tcase_create("strerror_76");
  tcase_add_test(tc_strerror_76, strerror_76);
  suite_add_tcase(s, tc_strerror_76);

  tc_strerror_77 = tcase_create("strerror_77");
  tcase_add_test(tc_strerror_77, strerror_77);
  suite_add_tcase(s, tc_strerror_77);

  tc_strerror_78 = tcase_create("strerror_78");
  tcase_add_test(tc_strerror_78, strerror_78);
  suite_add_tcase(s, tc_strerror_78);

  tc_strerror_79 = tcase_create("strerror_79");
  tcase_add_test(tc_strerror_79, strerror_79);
  suite_add_tcase(s, tc_strerror_79);

  tc_strerror_80 = tcase_create("strerror_80");
  tcase_add_test(tc_strerror_80, strerror_80);
  suite_add_tcase(s, tc_strerror_80);

  tc_strerror_81 = tcase_create("strerror_81");
  tcase_add_test(tc_strerror_81, strerror_81);
  suite_add_tcase(s, tc_strerror_81);

  tc_strerror_82 = tcase_create("strerror_82");
  tcase_add_test(tc_strerror_82, strerror_82);
  suite_add_tcase(s, tc_strerror_82);

  tc_strerror_83 = tcase_create("strerror_83");
  tcase_add_test(tc_strerror_83, strerror_83);
  suite_add_tcase(s, tc_strerror_83);

  tc_strerror_84 = tcase_create("strerror_84");
  tcase_add_test(tc_strerror_84, strerror_84);
  suite_add_tcase(s, tc_strerror_84);

  tc_strerror_85 = tcase_create("strerror_85");
  tcase_add_test(tc_strerror_85, strerror_85);
  suite_add_tcase(s, tc_strerror_85);

  tc_strerror_86 = tcase_create("strerror_86");
  tcase_add_test(tc_strerror_86, strerror_86);
  suite_add_tcase(s, tc_strerror_86);

  tc_strerror_87 = tcase_create("strerror_87");
  tcase_add_test(tc_strerror_87, strerror_87);
  suite_add_tcase(s, tc_strerror_87);

  tc_strerror_88 = tcase_create("strerror_88");
  tcase_add_test(tc_strerror_88, strerror_88);
  suite_add_tcase(s, tc_strerror_88);

  tc_strerror_89 = tcase_create("strerror_89");
  tcase_add_test(tc_strerror_89, strerror_89);
  suite_add_tcase(s, tc_strerror_89);

  tc_strerror_90 = tcase_create("strerror_90");
  tcase_add_test(tc_strerror_90, strerror_90);
  suite_add_tcase(s, tc_strerror_90);

  tc_strerror_91 = tcase_create("strerror_91");
  tcase_add_test(tc_strerror_91, strerror_91);
  suite_add_tcase(s, tc_strerror_91);

  tc_strerror_92 = tcase_create("strerror_92");
  tcase_add_test(tc_strerror_92, strerror_92);
  suite_add_tcase(s, tc_strerror_92);

  tc_strerror_93 = tcase_create("strerror_93");
  tcase_add_test(tc_strerror_93, strerror_93);
  suite_add_tcase(s, tc_strerror_93);

  tc_strerror_94 = tcase_create("strerror_94");
  tcase_add_test(tc_strerror_94, strerror_94);
  suite_add_tcase(s, tc_strerror_94);

  tc_strerror_95 = tcase_create("strerror_95");
  tcase_add_test(tc_strerror_95, strerror_95);
  suite_add_tcase(s, tc_strerror_95);

  tc_strerror_96 = tcase_create("strerror_96");
  tcase_add_test(tc_strerror_96, strerror_96);
  suite_add_tcase(s, tc_strerror_96);

  tc_strerror_97 = tcase_create("strerror_97");
  tcase_add_test(tc_strerror_97, strerror_97);
  suite_add_tcase(s, tc_strerror_97);

  tc_strerror_98 = tcase_create("strerror_98");
  tcase_add_test(tc_strerror_98, strerror_98);
  suite_add_tcase(s, tc_strerror_98);

  tc_strerror_99 = tcase_create("strerror_99");
  tcase_add_test(tc_strerror_99, strerror_99);
  suite_add_tcase(s, tc_strerror_99);

  tc_strerror_100 = tcase_create("strerror_100");
  tcase_add_test(tc_strerror_100, strerror_100);
  suite_add_tcase(s, tc_strerror_100);

  tc_strerror_101 = tcase_create("strerror_101");
  tcase_add_test(tc_strerror_101, strerror_101);
  suite_add_tcase(s, tc_strerror_101);

  tc_strerror_102 = tcase_create("strerror_102");
  tcase_add_test(tc_strerror_102, strerror_102);
  suite_add_tcase(s, tc_strerror_102);

  tc_strerror_103 = tcase_create("strerror_103");
  tcase_add_test(tc_strerror_103, strerror_103);
  suite_add_tcase(s, tc_strerror_103);

  tc_strerror_104 = tcase_create("strerror_104");
  tcase_add_test(tc_strerror_104, strerror_104);
  suite_add_tcase(s, tc_strerror_104);

  tc_strerror_105 = tcase_create("strerror_105");
  tcase_add_test(tc_strerror_105, strerror_105);
  suite_add_tcase(s, tc_strerror_105);

  tc_strerror_106 = tcase_create("strerror_106");
  tcase_add_test(tc_strerror_106, strerror_106);
  suite_add_tcase(s, tc_strerror_106);

  tc_strerror_107 = tcase_create("strerror_107");
  tcase_add_test(tc_strerror_107, strerror_107);
  suite_add_tcase(s, tc_strerror_107);

  tc_strerror_108 = tcase_create("strerror_108");
  tcase_add_test(tc_strerror_108, strerror_108);
  suite_add_tcase(s, tc_strerror_108);

  tc_strerror_109 = tcase_create("strerror_109");
  tcase_add_test(tc_strerror_109, strerror_109);
  suite_add_tcase(s, tc_strerror_109);

  TCase *tc_sprintf_1_int;
  tc_sprintf_1_int = tcase_create("sprintf_1_int");
  tcase_add_test(tc_sprintf_1_int, sprintf_1_int);
  suite_add_tcase(s, tc_sprintf_1_int);

  TCase *tc_sprintf_1_buffer_int;
  tc_sprintf_1_buffer_int = tcase_create("sprintf_1_buffer_int");
  tcase_add_test(tc_sprintf_1_buffer_int, sprintf_1_buffer_int);
  suite_add_tcase(s, tc_sprintf_1_buffer_int);

  TCase *tc_sprintf_2_int;
  tc_sprintf_2_int = tcase_create("sprintf_2_int");
  tcase_add_test(tc_sprintf_2_int, sprintf_2_int);
  suite_add_tcase(s, tc_sprintf_2_int);

  TCase *tc_sprintf_2_buffer_int;
  tc_sprintf_2_buffer_int = tcase_create("sprintf_2_buffer_int");
  tcase_add_test(tc_sprintf_2_buffer_int, sprintf_2_buffer_int);
  suite_add_tcase(s, tc_sprintf_2_buffer_int);

  TCase *tc_sprintf_3_int;
  tc_sprintf_3_int = tcase_create("sprintf_3_int");
  tcase_add_test(tc_sprintf_3_int, sprintf_3_int);
  suite_add_tcase(s, tc_sprintf_3_int);

  TCase *tc_sprintf_3_buffer_int;
  tc_sprintf_3_buffer_int = tcase_create("sprintf_3_buffer_int");
  tcase_add_test(tc_sprintf_3_buffer_int, sprintf_3_buffer_int);
  suite_add_tcase(s, tc_sprintf_3_buffer_int);

  TCase *tc_sprintf_4_int;
  tc_sprintf_4_int = tcase_create("sprintf_4_int");
  tcase_add_test(tc_sprintf_4_int, sprintf_4_int);
  suite_add_tcase(s, tc_sprintf_4_int);

  TCase *tc_sprintf_4_buffer_int;
  tc_sprintf_4_buffer_int = tcase_create("sprintf_4_buffer_int");
  tcase_add_test(tc_sprintf_4_buffer_int, sprintf_4_buffer_int);
  suite_add_tcase(s, tc_sprintf_4_buffer_int);

  TCase *tc_sprintf_5_int;
  tc_sprintf_5_int = tcase_create("sprintf_5_int");
  tcase_add_test(tc_sprintf_5_int, sprintf_5_int);
  suite_add_tcase(s, tc_sprintf_5_int);

  TCase *tc_sprintf_5_buffer_int;
  tc_sprintf_5_buffer_int = tcase_create("sprintf_5_buffer_int");
  tcase_add_test(tc_sprintf_5_buffer_int, sprintf_5_buffer_int);
  suite_add_tcase(s, tc_sprintf_5_buffer_int);

  TCase *tc_sprintf_6_int;
  tc_sprintf_6_int = tcase_create("sprintf_6_int");
  tcase_add_test(tc_sprintf_6_int, sprintf_6_int);
  suite_add_tcase(s, tc_sprintf_6_int);

  TCase *tc_sprintf_6_buffer_int;
  tc_sprintf_6_buffer_int = tcase_create("sprintf_6_buffer_int");
  tcase_add_test(tc_sprintf_6_buffer_int, sprintf_6_buffer_int);
  suite_add_tcase(s, tc_sprintf_6_buffer_int);

  TCase *tc_sprintf_7_int;
  tc_sprintf_7_int = tcase_create("sprintf_7_int");
  tcase_add_test(tc_sprintf_7_int, sprintf_7_int);
  suite_add_tcase(s, tc_sprintf_7_int);

  TCase *tc_sprintf_7_buffer_int;
  tc_sprintf_7_buffer_int = tcase_create("sprintf_7_buffer_int");
  tcase_add_test(tc_sprintf_7_buffer_int, sprintf_7_buffer_int);
  suite_add_tcase(s, tc_sprintf_7_buffer_int);

  TCase *tc_sprintf_8_int;
  tc_sprintf_8_int = tcase_create("sprintf_8_int");
  tcase_add_test(tc_sprintf_8_int, sprintf_8_int);
  suite_add_tcase(s, tc_sprintf_8_int);

  TCase *tc_sprintf_8_buffer_int;
  tc_sprintf_8_buffer_int = tcase_create("sprintf_8_buffer_int");
  tcase_add_test(tc_sprintf_8_buffer_int, sprintf_8_buffer_int);
  suite_add_tcase(s, tc_sprintf_8_buffer_int);

  TCase *tc_sprintf_9_int;
  tc_sprintf_9_int = tcase_create("sprintf_9_int");
  tcase_add_test(tc_sprintf_9_int, sprintf_9_int);
  suite_add_tcase(s, tc_sprintf_9_int);

  TCase *tc_sprintf_9_buffer_int;
  tc_sprintf_9_buffer_int = tcase_create("sprintf_9_buffer_int");
  tcase_add_test(tc_sprintf_9_buffer_int, sprintf_9_buffer_int);
  suite_add_tcase(s, tc_sprintf_9_buffer_int);

  TCase *tc_sprintf_10_int;
  tc_sprintf_10_int = tcase_create("sprintf_10_int");
  tcase_add_test(tc_sprintf_10_int, sprintf_10_int);
  suite_add_tcase(s, tc_sprintf_10_int);

  TCase *tc_sprintf_10_buffer_int;
  tc_sprintf_10_buffer_int = tcase_create("sprintf_10_buffer_int");
  tcase_add_test(tc_sprintf_10_buffer_int, sprintf_10_buffer_int);
  suite_add_tcase(s, tc_sprintf_10_buffer_int);

  TCase *tc_sprintf_11_int;
  tc_sprintf_11_int = tcase_create("sprintf_11_int");
  tcase_add_test(tc_sprintf_11_int, sprintf_11_int);
  suite_add_tcase(s, tc_sprintf_11_int);

  TCase *tc_sprintf_11_buffer_int;
  tc_sprintf_11_buffer_int = tcase_create("sprintf_11_buffer_int");
  tcase_add_test(tc_sprintf_11_buffer_int, sprintf_11_buffer_int);
  suite_add_tcase(s, tc_sprintf_11_buffer_int);

  TCase *tc_sprintf_12_int;
  tc_sprintf_12_int = tcase_create("sprintf_12_int");
  tcase_add_test(tc_sprintf_12_int, sprintf_12_int);
  suite_add_tcase(s, tc_sprintf_12_int);

  TCase *tc_sprintf_12_buffer_int;
  tc_sprintf_12_buffer_int = tcase_create("sprintf_12_buffer_int");
  tcase_add_test(tc_sprintf_12_buffer_int, sprintf_12_buffer_int);
  suite_add_tcase(s, tc_sprintf_12_buffer_int);

  TCase *tc_sprintf_13_int;
  tc_sprintf_13_int = tcase_create("sprintf_13_int");
  tcase_add_test(tc_sprintf_13_int, sprintf_13_int);
  suite_add_tcase(s, tc_sprintf_13_int);

  TCase *tc_sprintf_13_buffer_int;
  tc_sprintf_13_buffer_int = tcase_create("sprintf_13_buffer_int");
  tcase_add_test(tc_sprintf_13_buffer_int, sprintf_13_buffer_int);
  suite_add_tcase(s, tc_sprintf_13_buffer_int);

  TCase *tc_sprintf_14_int;
  tc_sprintf_14_int = tcase_create("sprintf_14_int");
  tcase_add_test(tc_sprintf_14_int, sprintf_14_int);
  suite_add_tcase(s, tc_sprintf_14_int);

  TCase *tc_sprintf_14_buffer_int;
  tc_sprintf_14_buffer_int = tcase_create("sprintf_14_buffer_int");
  tcase_add_test(tc_sprintf_14_buffer_int, sprintf_14_buffer_int);
  suite_add_tcase(s, tc_sprintf_14_buffer_int);

  TCase *tc_sprintf_15_int;
  tc_sprintf_15_int = tcase_create("sprintf_15_int");
  tcase_add_test(tc_sprintf_15_int, sprintf_15_int);
  suite_add_tcase(s, tc_sprintf_15_int);

  TCase *tc_sprintf_15_buffer_int;
  tc_sprintf_15_buffer_int = tcase_create("sprintf_15_buffer_int");
  tcase_add_test(tc_sprintf_15_buffer_int, sprintf_15_buffer_int);
  suite_add_tcase(s, tc_sprintf_15_buffer_int);

  TCase *tc_sprintf_16_int;
  tc_sprintf_16_int = tcase_create("sprintf_16_int");
  tcase_add_test(tc_sprintf_16_int, sprintf_16_int);
  suite_add_tcase(s, tc_sprintf_16_int);

  TCase *tc_sprintf_16_buffer_int;
  tc_sprintf_16_buffer_int = tcase_create("sprintf_16_buffer_int");
  tcase_add_test(tc_sprintf_16_buffer_int, sprintf_16_buffer_int);
  suite_add_tcase(s, tc_sprintf_16_buffer_int);

  TCase *tc_sprintf_17_int;
  tc_sprintf_17_int = tcase_create("sprintf_17_int");
  tcase_add_test(tc_sprintf_17_int, sprintf_17_int);
  suite_add_tcase(s, tc_sprintf_17_int);

  TCase *tc_sprintf_17_buffer_int;
  tc_sprintf_17_buffer_int = tcase_create("sprintf_17_buffer_int");
  tcase_add_test(tc_sprintf_17_buffer_int, sprintf_17_buffer_int);
  suite_add_tcase(s, tc_sprintf_17_buffer_int);

  TCase *tc_sprintf_18_int;
  tc_sprintf_18_int = tcase_create("sprintf_18_int");
  tcase_add_test(tc_sprintf_18_int, sprintf_18_int);
  suite_add_tcase(s, tc_sprintf_18_int);

  TCase *tc_sprintf_18_buffer_int;
  tc_sprintf_18_buffer_int = tcase_create("sprintf_18_buffer_int");
  tcase_add_test(tc_sprintf_18_buffer_int, sprintf_18_buffer_int);
  suite_add_tcase(s, tc_sprintf_18_buffer_int);

  TCase *tc_sprintf_19_int;
  tc_sprintf_19_int = tcase_create("sprintf_19_int");
  tcase_add_test(tc_sprintf_19_int, sprintf_19_int);
  suite_add_tcase(s, tc_sprintf_19_int);

  TCase *tc_sprintf_19_buffer_int;
  tc_sprintf_19_buffer_int = tcase_create("sprintf_19_buffer_int");
  tcase_add_test(tc_sprintf_19_buffer_int, sprintf_19_buffer_int);
  suite_add_tcase(s, tc_sprintf_19_buffer_int);

  TCase *tc_sprintf_20_int;
  tc_sprintf_20_int = tcase_create("sprintf_20_int");
  tcase_add_test(tc_sprintf_20_int, sprintf_20_int);
  suite_add_tcase(s, tc_sprintf_20_int);

  TCase *tc_sprintf_20_buffer_int;
  tc_sprintf_20_buffer_int = tcase_create("sprintf_20_buffer_int");
  tcase_add_test(tc_sprintf_20_buffer_int, sprintf_20_buffer_int);
  suite_add_tcase(s, tc_sprintf_20_buffer_int);

  TCase *tc_sprintf_21_int;
  tc_sprintf_21_int = tcase_create("sprintf_21_int");
  tcase_add_test(tc_sprintf_21_int, sprintf_21_int);
  suite_add_tcase(s, tc_sprintf_21_int);

  TCase *tc_sprintf_21_buffer_int;
  tc_sprintf_21_buffer_int = tcase_create("sprintf_21_buffer_int");
  tcase_add_test(tc_sprintf_21_buffer_int, sprintf_21_buffer_int);
  suite_add_tcase(s, tc_sprintf_21_buffer_int);

  TCase *tc_sprintf_22_int;
  tc_sprintf_22_int = tcase_create("sprintf_22_int");
  tcase_add_test(tc_sprintf_22_int, sprintf_22_int);
  suite_add_tcase(s, tc_sprintf_22_int);

  TCase *tc_sprintf_22_buffer_int;
  tc_sprintf_22_buffer_int = tcase_create("sprintf_22_buffer_int");
  tcase_add_test(tc_sprintf_22_buffer_int, sprintf_22_buffer_int);
  suite_add_tcase(s, tc_sprintf_22_buffer_int);

  TCase *tc_sprintf_23_int;
  tc_sprintf_23_int = tcase_create("sprintf_23_int");
  tcase_add_test(tc_sprintf_23_int, sprintf_23_int);
  suite_add_tcase(s, tc_sprintf_23_int);

  TCase *tc_sprintf_23_buffer_int;
  tc_sprintf_23_buffer_int = tcase_create("sprintf_23_buffer_int");
  tcase_add_test(tc_sprintf_23_buffer_int, sprintf_23_buffer_int);
  suite_add_tcase(s, tc_sprintf_23_buffer_int);

  TCase *tc_sprintf_24_int;
  tc_sprintf_24_int = tcase_create("sprintf_24_int");
  tcase_add_test(tc_sprintf_24_int, sprintf_24_int);
  suite_add_tcase(s, tc_sprintf_24_int);

  TCase *tc_sprintf_24_buffer_int;
  tc_sprintf_24_buffer_int = tcase_create("sprintf_24_buffer_int");
  tcase_add_test(tc_sprintf_24_buffer_int, sprintf_24_buffer_int);
  suite_add_tcase(s, tc_sprintf_24_buffer_int);

  TCase *tc_sprintf_25_int;
  tc_sprintf_25_int = tcase_create("sprintf_25_int");
  tcase_add_test(tc_sprintf_25_int, sprintf_25_int);
  suite_add_tcase(s, tc_sprintf_25_int);

  TCase *tc_sprintf_25_buffer_int;
  tc_sprintf_25_buffer_int = tcase_create("sprintf_25_buffer_int");
  tcase_add_test(tc_sprintf_25_buffer_int, sprintf_25_buffer_int);
  suite_add_tcase(s, tc_sprintf_25_buffer_int);

  TCase *tc_sprintf_26_int;
  tc_sprintf_26_int = tcase_create("sprintf_26_int");
  tcase_add_test(tc_sprintf_26_int, sprintf_26_int);
  suite_add_tcase(s, tc_sprintf_26_int);

  TCase *tc_sprintf_26_buffer_int;
  tc_sprintf_26_buffer_int = tcase_create("sprintf_26_buffer_int");
  tcase_add_test(tc_sprintf_26_buffer_int, sprintf_26_buffer_int);
  suite_add_tcase(s, tc_sprintf_26_buffer_int);

  TCase *tc_sprintf_27_int;
  tc_sprintf_27_int = tcase_create("sprintf_27_int");
  tcase_add_test(tc_sprintf_27_int, sprintf_27_int);
  suite_add_tcase(s, tc_sprintf_27_int);

  TCase *tc_sprintf_27_buffer_int;
  tc_sprintf_27_buffer_int = tcase_create("sprintf_27_buffer_int");
  tcase_add_test(tc_sprintf_27_buffer_int, sprintf_27_buffer_int);
  suite_add_tcase(s, tc_sprintf_27_buffer_int);

  TCase *tc_sprintf_28_int;
  tc_sprintf_28_int = tcase_create("sprintf_28_int");
  tcase_add_test(tc_sprintf_28_int, sprintf_28_int);
  suite_add_tcase(s, tc_sprintf_28_int);

  TCase *tc_sprintf_28_buffer_int;
  tc_sprintf_28_buffer_int = tcase_create("sprintf_28_buffer_int");
  tcase_add_test(tc_sprintf_28_buffer_int, sprintf_28_buffer_int);
  suite_add_tcase(s, tc_sprintf_28_buffer_int);

  TCase *tc_sprintf_29_int;
  tc_sprintf_29_int = tcase_create("sprintf_29_int");
  tcase_add_test(tc_sprintf_29_int, sprintf_29_int);
  suite_add_tcase(s, tc_sprintf_29_int);

  TCase *tc_sprintf_29_buffer_int;
  tc_sprintf_29_buffer_int = tcase_create("sprintf_29_buffer_int");
  tcase_add_test(tc_sprintf_29_buffer_int, sprintf_29_buffer_int);
  suite_add_tcase(s, tc_sprintf_29_buffer_int);

  TCase *tc_sprintf_30_int;
  tc_sprintf_30_int = tcase_create("sprintf_30_int");
  tcase_add_test(tc_sprintf_30_int, sprintf_30_int);
  suite_add_tcase(s, tc_sprintf_30_int);

  TCase *tc_sprintf_30_buffer_int;
  tc_sprintf_30_buffer_int = tcase_create("sprintf_30_buffer_int");
  tcase_add_test(tc_sprintf_30_buffer_int, sprintf_30_buffer_int);
  suite_add_tcase(s, tc_sprintf_30_buffer_int);

  TCase *tc_sprintf_31_int;
  tc_sprintf_31_int = tcase_create("sprintf_31_int");
  tcase_add_test(tc_sprintf_31_int, sprintf_31_int);
  suite_add_tcase(s, tc_sprintf_31_int);

  TCase *tc_sprintf_31_buffer_int;
  tc_sprintf_31_buffer_int = tcase_create("sprintf_31_buffer_int");
  tcase_add_test(tc_sprintf_31_buffer_int, sprintf_31_buffer_int);
  suite_add_tcase(s, tc_sprintf_31_buffer_int);

  TCase *tc_sprintf_32_int;
  tc_sprintf_32_int = tcase_create("sprintf_32_int");
  tcase_add_test(tc_sprintf_32_int, sprintf_32_int);
  suite_add_tcase(s, tc_sprintf_32_int);

  TCase *tc_sprintf_32_buffer_int;
  tc_sprintf_32_buffer_int = tcase_create("sprintf_32_buffer_int");
  tcase_add_test(tc_sprintf_32_buffer_int, sprintf_32_buffer_int);
  suite_add_tcase(s, tc_sprintf_32_buffer_int);

  TCase *tc_sprintf_33_int;
  tc_sprintf_33_int = tcase_create("sprintf_33_int");
  tcase_add_test(tc_sprintf_33_int, sprintf_33_int);
  suite_add_tcase(s, tc_sprintf_33_int);

  TCase *tc_sprintf_33_buffer_int;
  tc_sprintf_33_buffer_int = tcase_create("sprintf_33_buffer_int");
  tcase_add_test(tc_sprintf_33_buffer_int, sprintf_33_buffer_int);
  suite_add_tcase(s, tc_sprintf_33_buffer_int);

  TCase *tc_sprintf_34_int;
  tc_sprintf_34_int = tcase_create("sprintf_34_int");
  tcase_add_test(tc_sprintf_34_int, sprintf_34_int);
  suite_add_tcase(s, tc_sprintf_34_int);

  TCase *tc_sprintf_34_buffer_int;
  tc_sprintf_34_buffer_int = tcase_create("sprintf_34_buffer_int");
  tcase_add_test(tc_sprintf_34_buffer_int, sprintf_34_buffer_int);
  suite_add_tcase(s, tc_sprintf_34_buffer_int);

  TCase *tc_sprintf_35_int;
  tc_sprintf_35_int = tcase_create("sprintf_35_int");
  tcase_add_test(tc_sprintf_35_int, sprintf_35_int);
  suite_add_tcase(s, tc_sprintf_35_int);

  TCase *tc_sprintf_35_buffer_int;
  tc_sprintf_35_buffer_int = tcase_create("sprintf_35_buffer_int");
  tcase_add_test(tc_sprintf_35_buffer_int, sprintf_35_buffer_int);
  suite_add_tcase(s, tc_sprintf_35_buffer_int);

  TCase *tc_sprintf_36_int;
  tc_sprintf_36_int = tcase_create("sprintf_36_int");
  tcase_add_test(tc_sprintf_36_int, sprintf_36_int);
  suite_add_tcase(s, tc_sprintf_36_int);

  TCase *tc_sprintf_36_buffer_int;
  tc_sprintf_36_buffer_int = tcase_create("sprintf_36_buffer_int");
  tcase_add_test(tc_sprintf_36_buffer_int, sprintf_36_buffer_int);
  suite_add_tcase(s, tc_sprintf_36_buffer_int);

  TCase *tc_sprintf_37_int;
  tc_sprintf_37_int = tcase_create("sprintf_37_int");
  tcase_add_test(tc_sprintf_37_int, sprintf_37_int);
  suite_add_tcase(s, tc_sprintf_37_int);

  TCase *tc_sprintf_37_buffer_int;
  tc_sprintf_37_buffer_int = tcase_create("sprintf_37_buffer_int");
  tcase_add_test(tc_sprintf_37_buffer_int, sprintf_37_buffer_int);
  suite_add_tcase(s, tc_sprintf_37_buffer_int);

  TCase *tc_sprintf_38_int;
  tc_sprintf_38_int = tcase_create("sprintf_38_int");
  tcase_add_test(tc_sprintf_38_int, sprintf_38_int);
  suite_add_tcase(s, tc_sprintf_38_int);

  TCase *tc_sprintf_38_buffer_int;
  tc_sprintf_38_buffer_int = tcase_create("sprintf_38_buffer_int");
  tcase_add_test(tc_sprintf_38_buffer_int, sprintf_38_buffer_int);
  suite_add_tcase(s, tc_sprintf_38_buffer_int);

  TCase *tc_sprintf_39_int;
  tc_sprintf_39_int = tcase_create("sprintf_39_int");
  tcase_add_test(tc_sprintf_39_int, sprintf_39_int);
  suite_add_tcase(s, tc_sprintf_39_int);

  TCase *tc_sprintf_39_buffer_int;
  tc_sprintf_39_buffer_int = tcase_create("sprintf_39_buffer_int");
  tcase_add_test(tc_sprintf_39_buffer_int, sprintf_39_buffer_int);
  suite_add_tcase(s, tc_sprintf_39_buffer_int);

  TCase *tc_sprintf_40_int;
  tc_sprintf_40_int = tcase_create("sprintf_40_int");
  tcase_add_test(tc_sprintf_40_int, sprintf_40_int);
  suite_add_tcase(s, tc_sprintf_40_int);

  TCase *tc_sprintf_40_buffer_int;
  tc_sprintf_40_buffer_int = tcase_create("sprintf_40_buffer_int");
  tcase_add_test(tc_sprintf_40_buffer_int, sprintf_40_buffer_int);
  suite_add_tcase(s, tc_sprintf_40_buffer_int);

  TCase *tc_sprintf_41_int;
  tc_sprintf_41_int = tcase_create("sprintf_41_int");
  tcase_add_test(tc_sprintf_41_int, sprintf_41_int);
  suite_add_tcase(s, tc_sprintf_41_int);

  TCase *tc_sprintf_41_buffer_int;
  tc_sprintf_41_buffer_int = tcase_create("sprintf_41_buffer_int");
  tcase_add_test(tc_sprintf_41_buffer_int, sprintf_41_buffer_int);
  suite_add_tcase(s, tc_sprintf_41_buffer_int);

  TCase *tc_sprintf_42_int;
  tc_sprintf_42_int = tcase_create("sprintf_42_int");
  tcase_add_test(tc_sprintf_42_int, sprintf_42_int);
  suite_add_tcase(s, tc_sprintf_42_int);

  TCase *tc_sprintf_42_buffer_int;
  tc_sprintf_42_buffer_int = tcase_create("sprintf_42_buffer_int");
  tcase_add_test(tc_sprintf_42_buffer_int, sprintf_42_buffer_int);
  suite_add_tcase(s, tc_sprintf_42_buffer_int);

  TCase *tc_sprintf_43_int;
  tc_sprintf_43_int = tcase_create("sprintf_43_int");
  tcase_add_test(tc_sprintf_43_int, sprintf_43_int);
  suite_add_tcase(s, tc_sprintf_43_int);

  TCase *tc_sprintf_43_buffer_int;
  tc_sprintf_43_buffer_int = tcase_create("sprintf_43_buffer_int");
  tcase_add_test(tc_sprintf_43_buffer_int, sprintf_43_buffer_int);
  suite_add_tcase(s, tc_sprintf_43_buffer_int);

  TCase *tc_sprintf_44_int;
  tc_sprintf_44_int = tcase_create("sprintf_44_int");
  tcase_add_test(tc_sprintf_44_int, sprintf_44_int);
  suite_add_tcase(s, tc_sprintf_44_int);

  TCase *tc_sprintf_44_buffer_int;
  tc_sprintf_44_buffer_int = tcase_create("sprintf_44_buffer_int");
  tcase_add_test(tc_sprintf_44_buffer_int, sprintf_44_buffer_int);
  suite_add_tcase(s, tc_sprintf_44_buffer_int);

  TCase *tc_sprintf_45_int;
  tc_sprintf_45_int = tcase_create("sprintf_45_int");
  tcase_add_test(tc_sprintf_45_int, sprintf_45_int);
  suite_add_tcase(s, tc_sprintf_45_int);

  TCase *tc_sprintf_45_buffer_int;
  tc_sprintf_45_buffer_int = tcase_create("sprintf_45_buffer_int");
  tcase_add_test(tc_sprintf_45_buffer_int, sprintf_45_buffer_int);
  suite_add_tcase(s, tc_sprintf_45_buffer_int);

  TCase *tc_sprintf_46_int;
  tc_sprintf_46_int = tcase_create("sprintf_46_int");
  tcase_add_test(tc_sprintf_46_int, sprintf_46_int);
  suite_add_tcase(s, tc_sprintf_46_int);

  TCase *tc_sprintf_46_buffer_int;
  tc_sprintf_46_buffer_int = tcase_create("sprintf_46_buffer_int");
  tcase_add_test(tc_sprintf_46_buffer_int, sprintf_46_buffer_int);
  suite_add_tcase(s, tc_sprintf_46_buffer_int);

  TCase *tc_sprintf_47_int;
  tc_sprintf_47_int = tcase_create("sprintf_47_int");
  tcase_add_test(tc_sprintf_47_int, sprintf_47_int);
  suite_add_tcase(s, tc_sprintf_47_int);

  TCase *tc_sprintf_47_buffer_int;
  tc_sprintf_47_buffer_int = tcase_create("sprintf_47_buffer_int");
  tcase_add_test(tc_sprintf_47_buffer_int, sprintf_47_buffer_int);
  suite_add_tcase(s, tc_sprintf_47_buffer_int);

  TCase *tc_sprintf_48_int;
  tc_sprintf_48_int = tcase_create("sprintf_48_int");
  tcase_add_test(tc_sprintf_48_int, sprintf_48_int);
  suite_add_tcase(s, tc_sprintf_48_int);

  TCase *tc_sprintf_48_buffer_int;
  tc_sprintf_48_buffer_int = tcase_create("sprintf_48_buffer_int");
  tcase_add_test(tc_sprintf_48_buffer_int, sprintf_48_buffer_int);
  suite_add_tcase(s, tc_sprintf_48_buffer_int);

  TCase *tc_sprintf_49_int;
  tc_sprintf_49_int = tcase_create("sprintf_49_int");
  tcase_add_test(tc_sprintf_49_int, sprintf_49_int);
  suite_add_tcase(s, tc_sprintf_49_int);

  TCase *tc_sprintf_49_buffer_int;
  tc_sprintf_49_buffer_int = tcase_create("sprintf_49_buffer_int");
  tcase_add_test(tc_sprintf_49_buffer_int, sprintf_49_buffer_int);
  suite_add_tcase(s, tc_sprintf_49_buffer_int);

  TCase *tc_sprintf_50_int;
  tc_sprintf_50_int = tcase_create("sprintf_50_int");
  tcase_add_test(tc_sprintf_50_int, sprintf_50_int);
  suite_add_tcase(s, tc_sprintf_50_int);

  TCase *tc_sprintf_50_buffer_int;
  tc_sprintf_50_buffer_int = tcase_create("sprintf_50_buffer_int");
  tcase_add_test(tc_sprintf_50_buffer_int, sprintf_50_buffer_int);
  suite_add_tcase(s, tc_sprintf_50_buffer_int);

  TCase *tc_sprintf_1_char;
  tc_sprintf_1_char = tcase_create("sprintf_1_char");
  tcase_add_test(tc_sprintf_1_char, sprintf_1_char);
  suite_add_tcase(s, tc_sprintf_1_char);

  TCase *tc_sprintf_1_buffer_char;
  tc_sprintf_1_buffer_char = tcase_create("sprintf_1_buffer_char");
  tcase_add_test(tc_sprintf_1_buffer_char, sprintf_1_buffer_char);
  suite_add_tcase(s, tc_sprintf_1_buffer_char);

  TCase *tc_sprintf_2_char;
  tc_sprintf_2_char = tcase_create("sprintf_2_char");
  tcase_add_test(tc_sprintf_2_char, sprintf_2_char);
  suite_add_tcase(s, tc_sprintf_2_char);

  TCase *tc_sprintf_2_buffer_char;
  tc_sprintf_2_buffer_char = tcase_create("sprintf_2_buffer_char");
  tcase_add_test(tc_sprintf_2_buffer_char, sprintf_2_buffer_char);
  suite_add_tcase(s, tc_sprintf_2_buffer_char);

  TCase *tc_sprintf_3_char;
  tc_sprintf_3_char = tcase_create("sprintf_3_char");
  tcase_add_test(tc_sprintf_3_char, sprintf_3_char);
  suite_add_tcase(s, tc_sprintf_3_char);

  TCase *tc_sprintf_3_buffer_char;
  tc_sprintf_3_buffer_char = tcase_create("sprintf_3_buffer_char");
  tcase_add_test(tc_sprintf_3_buffer_char, sprintf_3_buffer_char);
  suite_add_tcase(s, tc_sprintf_3_buffer_char);

  TCase *tc_sprintf_4_char;
  tc_sprintf_4_char = tcase_create("sprintf_4_char");
  tcase_add_test(tc_sprintf_4_char, sprintf_4_char);
  suite_add_tcase(s, tc_sprintf_4_char);

  TCase *tc_sprintf_4_buffer_char;
  tc_sprintf_4_buffer_char = tcase_create("sprintf_4_buffer_char");
  tcase_add_test(tc_sprintf_4_buffer_char, sprintf_4_buffer_char);
  suite_add_tcase(s, tc_sprintf_4_buffer_char);

  TCase *tc_sprintf_5_char;
  tc_sprintf_5_char = tcase_create("sprintf_5_char");
  tcase_add_test(tc_sprintf_5_char, sprintf_5_char);
  suite_add_tcase(s, tc_sprintf_5_char);

  TCase *tc_sprintf_5_buffer_char;
  tc_sprintf_5_buffer_char = tcase_create("sprintf_5_buffer_char");
  tcase_add_test(tc_sprintf_5_buffer_char, sprintf_5_buffer_char);
  suite_add_tcase(s, tc_sprintf_5_buffer_char);

  TCase *tc_sprintf_6_char;
  tc_sprintf_6_char = tcase_create("sprintf_6_char");
  tcase_add_test(tc_sprintf_6_char, sprintf_6_char);
  suite_add_tcase(s, tc_sprintf_6_char);

  TCase *tc_sprintf_6_buffer_char;
  tc_sprintf_6_buffer_char = tcase_create("sprintf_6_buffer_char");
  tcase_add_test(tc_sprintf_6_buffer_char, sprintf_6_buffer_char);
  suite_add_tcase(s, tc_sprintf_6_buffer_char);

  TCase *tc_sprintf_7_char;
  tc_sprintf_7_char = tcase_create("sprintf_7_char");
  tcase_add_test(tc_sprintf_7_char, sprintf_7_char);
  suite_add_tcase(s, tc_sprintf_7_char);

  TCase *tc_sprintf_7_buffer_char;
  tc_sprintf_7_buffer_char = tcase_create("sprintf_7_buffer_char");
  tcase_add_test(tc_sprintf_7_buffer_char, sprintf_7_buffer_char);
  suite_add_tcase(s, tc_sprintf_7_buffer_char);

  TCase *tc_sprintf_8_char;
  tc_sprintf_8_char = tcase_create("sprintf_8_char");
  tcase_add_test(tc_sprintf_8_char, sprintf_8_char);
  suite_add_tcase(s, tc_sprintf_8_char);

  TCase *tc_sprintf_8_buffer_char;
  tc_sprintf_8_buffer_char = tcase_create("sprintf_8_buffer_char");
  tcase_add_test(tc_sprintf_8_buffer_char, sprintf_8_buffer_char);
  suite_add_tcase(s, tc_sprintf_8_buffer_char);

  TCase *tc_sprintf_9_char;
  tc_sprintf_9_char = tcase_create("sprintf_9_char");
  tcase_add_test(tc_sprintf_9_char, sprintf_9_char);
  suite_add_tcase(s, tc_sprintf_9_char);

  TCase *tc_sprintf_9_buffer_char;
  tc_sprintf_9_buffer_char = tcase_create("sprintf_9_buffer_char");
  tcase_add_test(tc_sprintf_9_buffer_char, sprintf_9_buffer_char);
  suite_add_tcase(s, tc_sprintf_9_buffer_char);

  TCase *tc_sprintf_10_char;
  tc_sprintf_10_char = tcase_create("sprintf_10_char");
  tcase_add_test(tc_sprintf_10_char, sprintf_10_char);
  suite_add_tcase(s, tc_sprintf_10_char);

  TCase *tc_sprintf_10_buffer_char;
  tc_sprintf_10_buffer_char = tcase_create("sprintf_10_buffer_char");
  tcase_add_test(tc_sprintf_10_buffer_char, sprintf_10_buffer_char);
  suite_add_tcase(s, tc_sprintf_10_buffer_char);

  TCase *tc_sprintf_8_string;
  tc_sprintf_8_string = tcase_create("sprintf_8_string");
  tcase_add_test(tc_sprintf_8_string, sprintf_8_string);
  suite_add_tcase(s, tc_sprintf_8_string);

  TCase *tc_sprintf_9_string;
  tc_sprintf_9_string = tcase_create("sprintf_9_string");
  tcase_add_test(tc_sprintf_9_string, sprintf_9_string);
  suite_add_tcase(s, tc_sprintf_9_string);

  TCase *tc_sprintf_1_buffer_float;
  tc_sprintf_1_buffer_float = tcase_create("sprintf_1_buffer_float");
  tcase_add_test(tc_sprintf_1_buffer_float, sprintf_1_buffer_float);
  suite_add_tcase(s, tc_sprintf_1_buffer_float);

  TCase *tc_sprintf_2_float;
  tc_sprintf_2_float = tcase_create("sprintf_2_float");
  tcase_add_test(tc_sprintf_2_float, sprintf_2_float);
  suite_add_tcase(s, tc_sprintf_2_float);

  TCase *tc_sprintf_2_buffer_float;
  tc_sprintf_2_buffer_float = tcase_create("sprintf_2_buffer_float");
  tcase_add_test(tc_sprintf_2_buffer_float, sprintf_2_buffer_float);
  suite_add_tcase(s, tc_sprintf_2_buffer_float);

  TCase *tc_sprintf_3_float;
  tc_sprintf_3_float = tcase_create("sprintf_3_float");
  tcase_add_test(tc_sprintf_3_float, sprintf_3_float);
  suite_add_tcase(s, tc_sprintf_3_float);

  TCase *tc_sprintf_3_buffer_float;
  tc_sprintf_3_buffer_float = tcase_create("sprintf_3_buffer_float");
  tcase_add_test(tc_sprintf_3_buffer_float, sprintf_3_buffer_float);
  suite_add_tcase(s, tc_sprintf_3_buffer_float);

  TCase *tc_sprintf_4_float;
  tc_sprintf_4_float = tcase_create("sprintf_4_float");
  tcase_add_test(tc_sprintf_4_float, sprintf_4_float);
  suite_add_tcase(s, tc_sprintf_4_float);

  TCase *tc_sprintf_4_buffer_float;
  tc_sprintf_4_buffer_float = tcase_create("sprintf_4_buffer_float");
  tcase_add_test(tc_sprintf_4_buffer_float, sprintf_4_buffer_float);
  suite_add_tcase(s, tc_sprintf_4_buffer_float);

  TCase *tc_sprintf_5_float;
  tc_sprintf_5_float = tcase_create("sprintf_5_float");
  tcase_add_test(tc_sprintf_5_float, sprintf_5_float);
  suite_add_tcase(s, tc_sprintf_5_float);

  TCase *tc_sprintf_5_buffer_float;
  tc_sprintf_5_buffer_float = tcase_create("sprintf_5_buffer_float");
  tcase_add_test(tc_sprintf_5_buffer_float, sprintf_5_buffer_float);
  suite_add_tcase(s, tc_sprintf_5_buffer_float);

  TCase *tc_sprintf_6_float;
  tc_sprintf_6_float = tcase_create("sprintf_6_float");
  tcase_add_test(tc_sprintf_6_float, sprintf_6_float);
  suite_add_tcase(s, tc_sprintf_6_float);

  TCase *tc_sprintf_6_buffer_float;
  tc_sprintf_6_buffer_float = tcase_create("sprintf_6_buffer_float");
  tcase_add_test(tc_sprintf_6_buffer_float, sprintf_6_buffer_float);
  suite_add_tcase(s, tc_sprintf_6_buffer_float);

  TCase *tc_sprintf_7_float;
  tc_sprintf_7_float = tcase_create("sprintf_7_float");
  tcase_add_test(tc_sprintf_7_float, sprintf_7_float);
  suite_add_tcase(s, tc_sprintf_7_float);

  TCase *tc_sprintf_7_buffer_float;
  tc_sprintf_7_buffer_float = tcase_create("sprintf_7_buffer_float");
  tcase_add_test(tc_sprintf_7_buffer_float, sprintf_7_buffer_float);
  suite_add_tcase(s, tc_sprintf_7_buffer_float);

  TCase *tc_sprintf_8_float;
  tc_sprintf_8_float = tcase_create("sprintf_8_float");
  tcase_add_test(tc_sprintf_8_float, sprintf_8_float);
  suite_add_tcase(s, tc_sprintf_8_float);

  TCase *tc_sprintf_8_buffer_float;
  tc_sprintf_8_buffer_float = tcase_create("sprintf_8_buffer_float");
  tcase_add_test(tc_sprintf_8_buffer_float, sprintf_8_buffer_float);
  suite_add_tcase(s, tc_sprintf_8_buffer_float);

  TCase *tc_sprintf_9_float;
  tc_sprintf_9_float = tcase_create("sprintf_9_float");
  tcase_add_test(tc_sprintf_9_float, sprintf_9_float);
  suite_add_tcase(s, tc_sprintf_9_float);

  TCase *tc_sprintf_9_buffer_float;
  tc_sprintf_9_buffer_float = tcase_create("sprintf_9_buffer_float");
  tcase_add_test(tc_sprintf_9_buffer_float, sprintf_9_buffer_float);
  suite_add_tcase(s, tc_sprintf_9_buffer_float);

  TCase *tc_sprintf_10_float;
  tc_sprintf_10_float = tcase_create("sprintf_10_float");
  tcase_add_test(tc_sprintf_10_float, sprintf_10_float);
  suite_add_tcase(s, tc_sprintf_10_float);

  TCase *tc_sprintf_10_buffer_float;
  tc_sprintf_10_buffer_float = tcase_create("sprintf_10_buffer_float");
  tcase_add_test(tc_sprintf_10_buffer_float, sprintf_10_buffer_float);
  suite_add_tcase(s, tc_sprintf_10_buffer_float);

  TCase *tc_sprintf_11_float;
  tc_sprintf_11_float = tcase_create("sprintf_11_float");
  tcase_add_test(tc_sprintf_11_float, sprintf_11_float);
  suite_add_tcase(s, tc_sprintf_11_float);

  TCase *tc_sprintf_11_buffer_float;
  tc_sprintf_11_buffer_float = tcase_create("sprintf_11_buffer_float");
  tcase_add_test(tc_sprintf_11_buffer_float, sprintf_11_buffer_float);
  suite_add_tcase(s, tc_sprintf_11_buffer_float);

  TCase *tc_sprintf_12_float;
  tc_sprintf_12_float = tcase_create("sprintf_12_float");
  tcase_add_test(tc_sprintf_12_float, sprintf_12_float);
  suite_add_tcase(s, tc_sprintf_12_float);

  TCase *tc_sprintf_12_buffer_float;
  tc_sprintf_12_buffer_float = tcase_create("sprintf_12_buffer_float");
  tcase_add_test(tc_sprintf_12_buffer_float, sprintf_12_buffer_float);
  suite_add_tcase(s, tc_sprintf_12_buffer_float);

  TCase *tc_sprintf_13_float;
  tc_sprintf_13_float = tcase_create("sprintf_13_float");
  tcase_add_test(tc_sprintf_13_float, sprintf_13_float);
  suite_add_tcase(s, tc_sprintf_13_float);

  TCase *tc_sprintf_13_buffer_float;
  tc_sprintf_13_buffer_float = tcase_create("sprintf_13_buffer_float");
  tcase_add_test(tc_sprintf_13_buffer_float, sprintf_13_buffer_float);
  suite_add_tcase(s, tc_sprintf_13_buffer_float);

  TCase *tc_sprintf_14_float;
  tc_sprintf_14_float = tcase_create("sprintf_14_float");
  tcase_add_test(tc_sprintf_14_float, sprintf_14_float);
  suite_add_tcase(s, tc_sprintf_14_float);

  TCase *tc_sprintf_14_buffer_float;
  tc_sprintf_14_buffer_float = tcase_create("sprintf_14_buffer_float");
  tcase_add_test(tc_sprintf_14_buffer_float, sprintf_14_buffer_float);
  suite_add_tcase(s, tc_sprintf_14_buffer_float);

  TCase *tc_sprintf_15_float;
  tc_sprintf_15_float = tcase_create("sprintf_15_float");
  tcase_add_test(tc_sprintf_15_float, sprintf_15_float);
  suite_add_tcase(s, tc_sprintf_15_float);

  TCase *tc_sprintf_15_buffer_float;
  tc_sprintf_15_buffer_float = tcase_create("sprintf_15_buffer_float");
  tcase_add_test(tc_sprintf_15_buffer_float, sprintf_15_buffer_float);
  suite_add_tcase(s, tc_sprintf_15_buffer_float);

  TCase *tc_sprintf_16_float;
  tc_sprintf_16_float = tcase_create("sprintf_16_float");
  tcase_add_test(tc_sprintf_16_float, sprintf_16_float);
  suite_add_tcase(s, tc_sprintf_16_float);

  TCase *tc_sprintf_16_buffer_float;
  tc_sprintf_16_buffer_float = tcase_create("sprintf_16_buffer_float");
  tcase_add_test(tc_sprintf_16_buffer_float, sprintf_16_buffer_float);
  suite_add_tcase(s, tc_sprintf_16_buffer_float);

  TCase *tc_sprintf_17_float;
  tc_sprintf_17_float = tcase_create("sprintf_17_float");
  tcase_add_test(tc_sprintf_17_float, sprintf_17_float);
  suite_add_tcase(s, tc_sprintf_17_float);

  TCase *tc_sprintf_17_buffer_float;
  tc_sprintf_17_buffer_float = tcase_create("sprintf_17_buffer_float");
  tcase_add_test(tc_sprintf_17_buffer_float, sprintf_17_buffer_float);
  suite_add_tcase(s, tc_sprintf_17_buffer_float);

  TCase *tc_sprintf_18_float;
  tc_sprintf_18_float = tcase_create("sprintf_18_float");
  tcase_add_test(tc_sprintf_18_float, sprintf_18_float);
  suite_add_tcase(s, tc_sprintf_18_float);

  TCase *tc_sprintf_18_buffer_float;
  tc_sprintf_18_buffer_float = tcase_create("sprintf_18_buffer_float");
  tcase_add_test(tc_sprintf_18_buffer_float, sprintf_18_buffer_float);
  suite_add_tcase(s, tc_sprintf_18_buffer_float);

  TCase *tc_sprintf_19_float;
  tc_sprintf_19_float = tcase_create("sprintf_19_float");
  tcase_add_test(tc_sprintf_19_float, sprintf_19_float);
  suite_add_tcase(s, tc_sprintf_19_float);

  TCase *tc_sprintf_19_buffer_float;
  tc_sprintf_19_buffer_float = tcase_create("sprintf_19_buffer_float");
  tcase_add_test(tc_sprintf_19_buffer_float, sprintf_19_buffer_float);
  suite_add_tcase(s, tc_sprintf_19_buffer_float);

  TCase *tc_sprintf_20_float;
  tc_sprintf_20_float = tcase_create("sprintf_20_float");
  tcase_add_test(tc_sprintf_20_float, sprintf_20_float);
  suite_add_tcase(s, tc_sprintf_20_float);

  TCase *tc_sprintf_20_buffer_float;
  tc_sprintf_20_buffer_float = tcase_create("sprintf_20_buffer_float");
  tcase_add_test(tc_sprintf_20_buffer_float, sprintf_20_buffer_float);
  suite_add_tcase(s, tc_sprintf_20_buffer_float);

  TCase *tc_sprintf_21_float;
  tc_sprintf_21_float = tcase_create("sprintf_21_float");
  tcase_add_test(tc_sprintf_21_float, sprintf_21_float);
  suite_add_tcase(s, tc_sprintf_21_float);

  TCase *tc_sprintf_21_buffer_float;
  tc_sprintf_21_buffer_float = tcase_create("sprintf_21_buffer_float");
  tcase_add_test(tc_sprintf_21_buffer_float, sprintf_21_buffer_float);
  suite_add_tcase(s, tc_sprintf_21_buffer_float);

  TCase *tc_sprintf_22_float;
  tc_sprintf_22_float = tcase_create("sprintf_22_float");
  tcase_add_test(tc_sprintf_22_float, sprintf_22_float);
  suite_add_tcase(s, tc_sprintf_22_float);

  TCase *tc_sprintf_22_buffer_float;
  tc_sprintf_22_buffer_float = tcase_create("sprintf_22_buffer_float");
  tcase_add_test(tc_sprintf_22_buffer_float, sprintf_22_buffer_float);
  suite_add_tcase(s, tc_sprintf_22_buffer_float);

  TCase *tc_sprintf_23_float;
  tc_sprintf_23_float = tcase_create("sprintf_23_float");
  tcase_add_test(tc_sprintf_23_float, sprintf_23_float);
  suite_add_tcase(s, tc_sprintf_23_float);

  TCase *tc_sprintf_23_buffer_float;
  tc_sprintf_23_buffer_float = tcase_create("sprintf_23_buffer_float");
  tcase_add_test(tc_sprintf_23_buffer_float, sprintf_23_buffer_float);
  suite_add_tcase(s, tc_sprintf_23_buffer_float);

  TCase *tc_sprintf_24_float;
  tc_sprintf_24_float = tcase_create("sprintf_24_float");
  tcase_add_test(tc_sprintf_24_float, sprintf_24_float);
  suite_add_tcase(s, tc_sprintf_24_float);

  TCase *tc_sprintf_24_buffer_float;
  tc_sprintf_24_buffer_float = tcase_create("sprintf_24_buffer_float");
  tcase_add_test(tc_sprintf_24_buffer_float, sprintf_24_buffer_float);
  suite_add_tcase(s, tc_sprintf_24_buffer_float);

  TCase *tc_sprintf_25_float;
  tc_sprintf_25_float = tcase_create("sprintf_25_float");
  tcase_add_test(tc_sprintf_25_float, sprintf_25_float);
  suite_add_tcase(s, tc_sprintf_25_float);

  TCase *tc_sprintf_25_buffer_float;
  tc_sprintf_25_buffer_float = tcase_create("sprintf_25_buffer_float");
  tcase_add_test(tc_sprintf_25_buffer_float, sprintf_25_buffer_float);
  suite_add_tcase(s, tc_sprintf_25_buffer_float);

  TCase *tc_sprintf_26_float;
  tc_sprintf_26_float = tcase_create("sprintf_26_float");
  tcase_add_test(tc_sprintf_26_float, sprintf_26_float);
  suite_add_tcase(s, tc_sprintf_26_float);

  TCase *tc_sprintf_26_buffer_float;
  tc_sprintf_26_buffer_float = tcase_create("sprintf_26_buffer_float");
  tcase_add_test(tc_sprintf_26_buffer_float, sprintf_26_buffer_float);
  suite_add_tcase(s, tc_sprintf_26_buffer_float);

  TCase *tc_sprintf_27_float;
  tc_sprintf_27_float = tcase_create("sprintf_27_float");
  tcase_add_test(tc_sprintf_27_float, sprintf_27_float);
  suite_add_tcase(s, tc_sprintf_27_float);

  TCase *tc_sprintf_27_buffer_float;
  tc_sprintf_27_buffer_float = tcase_create("sprintf_27_buffer_float");
  tcase_add_test(tc_sprintf_27_buffer_float, sprintf_27_buffer_float);
  suite_add_tcase(s, tc_sprintf_27_buffer_float);

  TCase *tc_sprintf_28_float;
  tc_sprintf_28_float = tcase_create("sprintf_28_float");
  tcase_add_test(tc_sprintf_28_float, sprintf_28_float);
  suite_add_tcase(s, tc_sprintf_28_float);

  TCase *tc_sprintf_28_buffer_float;
  tc_sprintf_28_buffer_float = tcase_create("sprintf_28_buffer_float");
  tcase_add_test(tc_sprintf_28_buffer_float, sprintf_28_buffer_float);
  suite_add_tcase(s, tc_sprintf_28_buffer_float);

  TCase *tc_sprintf_29_float;
  tc_sprintf_29_float = tcase_create("sprintf_29_float");
  tcase_add_test(tc_sprintf_29_float, sprintf_29_float);
  suite_add_tcase(s, tc_sprintf_29_float);

  TCase *tc_sprintf_29_buffer_float;
  tc_sprintf_29_buffer_float = tcase_create("sprintf_29_buffer_float");
  tcase_add_test(tc_sprintf_29_buffer_float, sprintf_29_buffer_float);
  suite_add_tcase(s, tc_sprintf_29_buffer_float);

  TCase *tc_sprintf_30_float;
  tc_sprintf_30_float = tcase_create("sprintf_30_float");
  tcase_add_test(tc_sprintf_30_float, sprintf_30_float);
  suite_add_tcase(s, tc_sprintf_30_float);

  TCase *tc_sprintf_30_buffer_float;
  tc_sprintf_30_buffer_float = tcase_create("sprintf_30_buffer_float");
  tcase_add_test(tc_sprintf_30_buffer_float, sprintf_30_buffer_float);
  suite_add_tcase(s, tc_sprintf_30_buffer_float);

  TCase *tc_sprintf_31_float;
  tc_sprintf_31_float = tcase_create("sprintf_31_float");
  tcase_add_test(tc_sprintf_31_float, sprintf_31_float);
  suite_add_tcase(s, tc_sprintf_31_float);

  TCase *tc_sprintf_31_buffer_float;
  tc_sprintf_31_buffer_float = tcase_create("sprintf_31_buffer_float");
  tcase_add_test(tc_sprintf_31_buffer_float, sprintf_31_buffer_float);
  suite_add_tcase(s, tc_sprintf_31_buffer_float);

  TCase *tc_sprintf_32_float;
  tc_sprintf_32_float = tcase_create("sprintf_32_float");
  tcase_add_test(tc_sprintf_32_float, sprintf_32_float);
  suite_add_tcase(s, tc_sprintf_32_float);

  TCase *tc_sprintf_32_buffer_float;
  tc_sprintf_32_buffer_float = tcase_create("sprintf_32_buffer_float");
  tcase_add_test(tc_sprintf_32_buffer_float, sprintf_32_buffer_float);
  suite_add_tcase(s, tc_sprintf_32_buffer_float);

  TCase *tc_sprintf_33_float;
  tc_sprintf_33_float = tcase_create("sprintf_33_float");
  tcase_add_test(tc_sprintf_33_float, sprintf_33_float);
  suite_add_tcase(s, tc_sprintf_33_float);

  TCase *tc_sprintf_33_buffer_float;
  tc_sprintf_33_buffer_float = tcase_create("sprintf_33_buffer_float");
  tcase_add_test(tc_sprintf_33_buffer_float, sprintf_33_buffer_float);
  suite_add_tcase(s, tc_sprintf_33_buffer_float);

  TCase *tc_sprintf_34_float;
  tc_sprintf_34_float = tcase_create("sprintf_34_float");
  tcase_add_test(tc_sprintf_34_float, sprintf_34_float);
  suite_add_tcase(s, tc_sprintf_34_float);

  TCase *tc_sprintf_34_buffer_float;
  tc_sprintf_34_buffer_float = tcase_create("sprintf_34_buffer_float");
  tcase_add_test(tc_sprintf_34_buffer_float, sprintf_34_buffer_float);
  suite_add_tcase(s, tc_sprintf_34_buffer_float);

  TCase *tc_sprintf_35_float;
  tc_sprintf_35_float = tcase_create("sprintf_35_float");
  tcase_add_test(tc_sprintf_35_float, sprintf_35_float);
  suite_add_tcase(s, tc_sprintf_35_float);

  TCase *tc_sprintf_35_buffer_float;
  tc_sprintf_35_buffer_float = tcase_create("sprintf_35_buffer_float");
  tcase_add_test(tc_sprintf_35_buffer_float, sprintf_35_buffer_float);
  suite_add_tcase(s, tc_sprintf_35_buffer_float);

  TCase *tc_sprintf_36_float;
  tc_sprintf_36_float = tcase_create("sprintf_36_float");
  tcase_add_test(tc_sprintf_36_float, sprintf_36_float);
  suite_add_tcase(s, tc_sprintf_36_float);

  TCase *tc_sprintf_36_buffer_float;
  tc_sprintf_36_buffer_float = tcase_create("sprintf_36_buffer_float");
  tcase_add_test(tc_sprintf_36_buffer_float, sprintf_36_buffer_float);
  suite_add_tcase(s, tc_sprintf_36_buffer_float);

  TCase *tc_sprintf_37_float;
  tc_sprintf_37_float = tcase_create("sprintf_37_float");
  tcase_add_test(tc_sprintf_37_float, sprintf_37_float);
  suite_add_tcase(s, tc_sprintf_37_float);

  TCase *tc_sprintf_37_buffer_float;
  tc_sprintf_37_buffer_float = tcase_create("sprintf_37_buffer_float");
  tcase_add_test(tc_sprintf_37_buffer_float, sprintf_37_buffer_float);
  suite_add_tcase(s, tc_sprintf_37_buffer_float);

  TCase *tc_sprintf_38_float;
  tc_sprintf_38_float = tcase_create("sprintf_38_float");
  tcase_add_test(tc_sprintf_38_float, sprintf_38_float);
  suite_add_tcase(s, tc_sprintf_38_float);

  TCase *tc_sprintf_38_buffer_float;
  tc_sprintf_38_buffer_float = tcase_create("sprintf_38_buffer_float");
  tcase_add_test(tc_sprintf_38_buffer_float, sprintf_38_buffer_float);
  suite_add_tcase(s, tc_sprintf_38_buffer_float);

  TCase *tc_sprintf_39_float;
  tc_sprintf_39_float = tcase_create("sprintf_39_float");
  tcase_add_test(tc_sprintf_39_float, sprintf_39_float);
  suite_add_tcase(s, tc_sprintf_39_float);

  TCase *tc_sprintf_39_buffer_float;
  tc_sprintf_39_buffer_float = tcase_create("sprintf_39_buffer_float");
  tcase_add_test(tc_sprintf_39_buffer_float, sprintf_39_buffer_float);
  suite_add_tcase(s, tc_sprintf_39_buffer_float);

  TCase *tc_sprintf_40_float;
  tc_sprintf_40_float = tcase_create("sprintf_40_float");
  tcase_add_test(tc_sprintf_40_float, sprintf_40_float);
  suite_add_tcase(s, tc_sprintf_40_float);

  TCase *tc_sprintf_40_buffer_float;
  tc_sprintf_40_buffer_float = tcase_create("sprintf_40_buffer_float");
  tcase_add_test(tc_sprintf_40_buffer_float, sprintf_40_buffer_float);
  suite_add_tcase(s, tc_sprintf_40_buffer_float);

  TCase *tc_sprintf_41_float;
  tc_sprintf_41_float = tcase_create("sprintf_41_float");
  tcase_add_test(tc_sprintf_41_float, sprintf_41_float);
  suite_add_tcase(s, tc_sprintf_41_float);

  TCase *tc_sprintf_41_buffer_float;
  tc_sprintf_41_buffer_float = tcase_create("sprintf_41_buffer_float");
  tcase_add_test(tc_sprintf_41_buffer_float, sprintf_41_buffer_float);
  suite_add_tcase(s, tc_sprintf_41_buffer_float);

  TCase *tc_sprintf_42_float;
  tc_sprintf_42_float = tcase_create("sprintf_42_float");
  tcase_add_test(tc_sprintf_42_float, sprintf_42_float);
  suite_add_tcase(s, tc_sprintf_42_float);

  TCase *tc_sprintf_42_buffer_float;
  tc_sprintf_42_buffer_float = tcase_create("sprintf_42_buffer_float");
  tcase_add_test(tc_sprintf_42_buffer_float, sprintf_42_buffer_float);
  suite_add_tcase(s, tc_sprintf_42_buffer_float);

  TCase *tc_sprintf_43_float;
  tc_sprintf_43_float = tcase_create("sprintf_43_float");
  tcase_add_test(tc_sprintf_43_float, sprintf_43_float);
  suite_add_tcase(s, tc_sprintf_43_float);

  TCase *tc_sprintf_43_buffer_float;
  tc_sprintf_43_buffer_float = tcase_create("sprintf_43_buffer_float");
  tcase_add_test(tc_sprintf_43_buffer_float, sprintf_43_buffer_float);
  suite_add_tcase(s, tc_sprintf_43_buffer_float);

  TCase *tc_sprintf_44_float;
  tc_sprintf_44_float = tcase_create("sprintf_44_float");
  tcase_add_test(tc_sprintf_44_float, sprintf_44_float);
  suite_add_tcase(s, tc_sprintf_44_float);

  TCase *tc_sprintf_44_buffer_float;
  tc_sprintf_44_buffer_float = tcase_create("sprintf_44_buffer_float");
  tcase_add_test(tc_sprintf_44_buffer_float, sprintf_44_buffer_float);
  suite_add_tcase(s, tc_sprintf_44_buffer_float);

  TCase *tc_sprintf_45_float;
  tc_sprintf_45_float = tcase_create("sprintf_45_float");
  tcase_add_test(tc_sprintf_45_float, sprintf_45_float);
  suite_add_tcase(s, tc_sprintf_45_float);

  TCase *tc_sprintf_45_buffer_float;
  tc_sprintf_45_buffer_float = tcase_create("sprintf_45_buffer_float");
  tcase_add_test(tc_sprintf_45_buffer_float, sprintf_45_buffer_float);
  suite_add_tcase(s, tc_sprintf_45_buffer_float);

  TCase *tc_sprintf_46_float;
  tc_sprintf_46_float = tcase_create("sprintf_46_float");
  tcase_add_test(tc_sprintf_46_float, sprintf_46_float);
  suite_add_tcase(s, tc_sprintf_46_float);

  TCase *tc_sprintf_46_buffer_float;
  tc_sprintf_46_buffer_float = tcase_create("sprintf_46_buffer_float");
  tcase_add_test(tc_sprintf_46_buffer_float, sprintf_46_buffer_float);
  suite_add_tcase(s, tc_sprintf_46_buffer_float);

  TCase *tc_sprintf_47_float;
  tc_sprintf_47_float = tcase_create("sprintf_47_float");
  tcase_add_test(tc_sprintf_47_float, sprintf_47_float);
  suite_add_tcase(s, tc_sprintf_47_float);

  TCase *tc_sprintf_47_buffer_float;
  tc_sprintf_47_buffer_float = tcase_create("sprintf_47_buffer_float");
  tcase_add_test(tc_sprintf_47_buffer_float, sprintf_47_buffer_float);
  suite_add_tcase(s, tc_sprintf_47_buffer_float);

  TCase *tc_sprintf_48_float;
  tc_sprintf_48_float = tcase_create("sprintf_48_float");
  tcase_add_test(tc_sprintf_48_float, sprintf_48_float);
  suite_add_tcase(s, tc_sprintf_48_float);

  TCase *tc_sprintf_48_buffer_float;
  tc_sprintf_48_buffer_float = tcase_create("sprintf_48_buffer_float");
  tcase_add_test(tc_sprintf_48_buffer_float, sprintf_48_buffer_float);
  suite_add_tcase(s, tc_sprintf_48_buffer_float);

  TCase *tc_sprintf_49_float;
  tc_sprintf_49_float = tcase_create("sprintf_49_float");
  tcase_add_test(tc_sprintf_49_float, sprintf_49_float);
  suite_add_tcase(s, tc_sprintf_49_float);

  TCase *tc_sprintf_49_buffer_float;
  tc_sprintf_49_buffer_float = tcase_create("sprintf_49_buffer_float");
  tcase_add_test(tc_sprintf_49_buffer_float, sprintf_49_buffer_float);
  suite_add_tcase(s, tc_sprintf_49_buffer_float);

  TCase *tc_sprintf_50_float;
  tc_sprintf_50_float = tcase_create("sprintf_50_float");
  tcase_add_test(tc_sprintf_50_float, sprintf_50_float);
  suite_add_tcase(s, tc_sprintf_50_float);

  TCase *tc_sprintf_50_buffer_float;
  tc_sprintf_50_buffer_float = tcase_create("sprintf_50_buffer_float");
  tcase_add_test(tc_sprintf_50_buffer_float, sprintf_50_buffer_float);
  suite_add_tcase(s, tc_sprintf_50_buffer_float);

  TCase *tc_insert_1, *tc_insert_2, *tc_insert_3, *tc_insert_4, *tc_insert_5,
      *tc_insert_6, *tc_insert_7, *tc_insert_8, *tc_insert_9, *tc_insert_10,
      *tc_insert_11, *tc_insert_12, *tc_insert_13;
  tc_insert_1 = tcase_create("insert_1");
  tcase_add_test(tc_insert_1, insert_1);
  suite_add_tcase(s, tc_insert_1);

  tc_insert_2 = tcase_create("insert_2");
  tcase_add_test(tc_insert_2, insert_2);
  suite_add_tcase(s, tc_insert_2);

  tc_insert_3 = tcase_create("insert_3");
  tcase_add_test(tc_insert_3, insert_3);
  suite_add_tcase(s, tc_insert_3);

  tc_insert_4 = tcase_create("insert_4");
  tcase_add_test(tc_insert_4, insert_4);
  suite_add_tcase(s, tc_insert_4);

  tc_insert_5 = tcase_create("insert_5");
  tcase_add_test(tc_insert_5, insert_5);
  suite_add_tcase(s, tc_insert_5);

  tc_insert_6 = tcase_create("insert_6");
  tcase_add_test(tc_insert_6, insert_6);
  suite_add_tcase(s, tc_insert_6);

  tc_insert_7 = tcase_create("insert_7");
  tcase_add_test(tc_insert_7, insert_7);
  suite_add_tcase(s, tc_insert_7);

  tc_insert_8 = tcase_create("insert_8");
  tcase_add_test(tc_insert_8, insert_8);
  suite_add_tcase(s, tc_insert_8);

  tc_insert_9 = tcase_create("insert_9");
  tcase_add_test(tc_insert_9, insert_9);
  suite_add_tcase(s, tc_insert_9);

  tc_insert_10 = tcase_create("insert_10");
  tcase_add_test(tc_insert_10, insert_10);
  suite_add_tcase(s, tc_insert_10);

  tc_insert_11 = tcase_create("insert_11");
  tcase_add_test(tc_insert_11, insert_11);
  suite_add_tcase(s, tc_insert_11);

  tc_insert_12 = tcase_create("insert_12");
  tcase_add_test(tc_insert_12, insert_12);
  suite_add_tcase(s, tc_insert_12);

  tc_insert_13 = tcase_create("insert_13");
  tcase_add_test(tc_insert_13, insert_13);
  suite_add_tcase(s, tc_insert_13);

  TCase *tc_trim_1, *tc_trim_2, *tc_trim_3, *tc_trim_4, *tc_trim_5, *tc_trim_6,
      *tc_trim_7, *tc_trim_8, *tc_trim_9, *tc_trim_10, *tc_trim_11, *tc_trim_12,
      *tc_trim_13, *tc_trim_14, *tc_trim_15, *tc_trim_16, *tc_trim_17,
      *tc_trim_18, *tc_trim_19, *tc_trim_20, *tc_trim_21, *tc_trim_22,
      *tc_trim_23, *tc_trim_24, *tc_trim_25, *tc_trim_26;

  tc_trim_1 = tcase_create("trim_1");
  tcase_add_test(tc_trim_1, trim_1);
  suite_add_tcase(s, tc_trim_1);

  tc_trim_2 = tcase_create("trim_2");
  tcase_add_test(tc_trim_2, trim_2);
  suite_add_tcase(s, tc_trim_2);

  tc_trim_3 = tcase_create("trim_3");
  tcase_add_test(tc_trim_3, trim_3);
  suite_add_tcase(s, tc_trim_3);

  tc_trim_4 = tcase_create("trim_4");
  tcase_add_test(tc_trim_4, trim_4);
  suite_add_tcase(s, tc_trim_4);

  tc_trim_5 = tcase_create("trim_5");
  tcase_add_test(tc_trim_5, trim_5);
  suite_add_tcase(s, tc_trim_5);

  tc_trim_6 = tcase_create("trim_6");
  tcase_add_test(tc_trim_6, trim_6);
  suite_add_tcase(s, tc_trim_6);

  tc_trim_7 = tcase_create("trim_7");
  tcase_add_test(tc_trim_7, trim_7);
  suite_add_tcase(s, tc_trim_7);

  tc_trim_8 = tcase_create("trim_8");
  tcase_add_test(tc_trim_8, trim_8);
  suite_add_tcase(s, tc_trim_8);

  tc_trim_9 = tcase_create("trim_9");
  tcase_add_test(tc_trim_9, trim_9);
  suite_add_tcase(s, tc_trim_9);

  tc_trim_10 = tcase_create("trim_10");
  tcase_add_test(tc_trim_10, trim_10);
  suite_add_tcase(s, tc_trim_10);

  tc_trim_11 = tcase_create("trim_11");
  tcase_add_test(tc_trim_11, trim_11);
  suite_add_tcase(s, tc_trim_11);

  tc_trim_12 = tcase_create("trim_12");
  tcase_add_test(tc_trim_12, trim_12);
  suite_add_tcase(s, tc_trim_12);

  tc_trim_13 = tcase_create("trim_13");
  tcase_add_test(tc_trim_13, trim_13);
  suite_add_tcase(s, tc_trim_13);

  tc_trim_14 = tcase_create("trim_14");
  tcase_add_test(tc_trim_14, trim_14);
  suite_add_tcase(s, tc_trim_14);

  tc_trim_15 = tcase_create("trim_15");
  tcase_add_test(tc_trim_15, trim_15);
  suite_add_tcase(s, tc_trim_15);

  tc_trim_16 = tcase_create("trim_16");
  tcase_add_test(tc_trim_16, trim_16);
  suite_add_tcase(s, tc_trim_16);

  tc_trim_17 = tcase_create("trim_17");
  tcase_add_test(tc_trim_17, trim_17);
  suite_add_tcase(s, tc_trim_17);

  tc_trim_18 = tcase_create("trim_18");
  tcase_add_test(tc_trim_18, trim_18);
  suite_add_tcase(s, tc_trim_18);

  tc_trim_19 = tcase_create("trim_19");
  tcase_add_test(tc_trim_19, trim_19);
  suite_add_tcase(s, tc_trim_19);

  tc_trim_20 = tcase_create("trim_20");
  tcase_add_test(tc_trim_20, trim_20);
  suite_add_tcase(s, tc_trim_20);

  tc_trim_21 = tcase_create("trim_21");
  tcase_add_test(tc_trim_21, trim_21);
  suite_add_tcase(s, tc_trim_21);

  tc_trim_22 = tcase_create("trim_22");
  tcase_add_test(tc_trim_22, trim_22);
  suite_add_tcase(s, tc_trim_22);

  tc_trim_23 = tcase_create("trim_23");
  tcase_add_test(tc_trim_23, trim_23);
  suite_add_tcase(s, tc_trim_23);

  tc_trim_24 = tcase_create("trim_24");
  tcase_add_test(tc_trim_24, trim_24);
  suite_add_tcase(s, tc_trim_24);

  tc_trim_25 = tcase_create("trim_25");
  tcase_add_test(tc_trim_25, trim_25);
  suite_add_tcase(s, tc_trim_25);

  tc_trim_26 = tcase_create("trim_26");
  tcase_add_test(tc_trim_26, trim_26);
  suite_add_tcase(s, tc_trim_26);

  TCase *tc_to_upper_1, *tc_to_upper_2, *tc_to_upper_3, *tc_to_upper_4,
      *tc_to_upper_5, *tc_to_upper_6, *tc_to_upper_7, *tc_to_upper_8,
      *tc_to_upper_9, *tc_to_upper_10, *tc_to_upper_11, *tc_to_upper_12,
      *tc_to_upper_13, *tc_to_upper_14, *tc_to_upper_15, *tc_to_upper_16,
      *tc_to_upper_17, *tc_to_upper_18, *tc_to_upper_19, *tc_to_upper_20,
      *tc_to_upper_21, *tc_to_upper_22, *tc_to_upper_23, *tc_to_upper_24,
      *tc_to_upper_25;

  tc_to_upper_1 = tcase_create("to_upper_1");
  tcase_add_test(tc_to_upper_1, to_upper_1);
  suite_add_tcase(s, tc_to_upper_1);

  tc_to_upper_2 = tcase_create("to_upper_2");
  tcase_add_test(tc_to_upper_2, to_upper_2);
  suite_add_tcase(s, tc_to_upper_2);

  tc_to_upper_3 = tcase_create("to_upper_3");
  tcase_add_test(tc_to_upper_3, to_upper_3);
  suite_add_tcase(s, tc_to_upper_3);

  tc_to_upper_4 = tcase_create("to_upper_4");
  tcase_add_test(tc_to_upper_4, to_upper_4);
  suite_add_tcase(s, tc_to_upper_4);

  tc_to_upper_5 = tcase_create("to_upper_5");
  tcase_add_test(tc_to_upper_5, to_upper_5);
  suite_add_tcase(s, tc_to_upper_5);

  tc_to_upper_6 = tcase_create("to_upper_6");
  tcase_add_test(tc_to_upper_6, to_upper_6);
  suite_add_tcase(s, tc_to_upper_6);

  tc_to_upper_7 = tcase_create("to_upper_7");
  tcase_add_test(tc_to_upper_7, to_upper_7);
  suite_add_tcase(s, tc_to_upper_7);

  tc_to_upper_8 = tcase_create("to_upper_8");
  tcase_add_test(tc_to_upper_8, to_upper_8);
  suite_add_tcase(s, tc_to_upper_8);

  tc_to_upper_9 = tcase_create("to_upper_9");
  tcase_add_test(tc_to_upper_9, to_upper_9);
  suite_add_tcase(s, tc_to_upper_9);

  tc_to_upper_10 = tcase_create("to_upper_10");
  tcase_add_test(tc_to_upper_10, to_upper_10);
  suite_add_tcase(s, tc_to_upper_10);

  tc_to_upper_11 = tcase_create("to_upper_11");
  tcase_add_test(tc_to_upper_11, to_upper_11);
  suite_add_tcase(s, tc_to_upper_11);

  tc_to_upper_12 = tcase_create("to_upper_12");
  tcase_add_test(tc_to_upper_12, to_upper_12);
  suite_add_tcase(s, tc_to_upper_12);

  tc_to_upper_13 = tcase_create("to_upper_13");
  tcase_add_test(tc_to_upper_13, to_upper_13);
  suite_add_tcase(s, tc_to_upper_13);

  tc_to_upper_14 = tcase_create("to_upper_14");
  tcase_add_test(tc_to_upper_14, to_upper_14);
  suite_add_tcase(s, tc_to_upper_14);

  tc_to_upper_15 = tcase_create("to_upper_15");
  tcase_add_test(tc_to_upper_15, to_upper_15);
  suite_add_tcase(s, tc_to_upper_15);

  tc_to_upper_16 = tcase_create("to_upper_16");
  tcase_add_test(tc_to_upper_16, to_upper_16);
  suite_add_tcase(s, tc_to_upper_16);

  tc_to_upper_17 = tcase_create("to_upper_17");
  tcase_add_test(tc_to_upper_17, to_upper_17);
  suite_add_tcase(s, tc_to_upper_17);

  tc_to_upper_18 = tcase_create("to_upper_18");
  tcase_add_test(tc_to_upper_18, to_upper_18);
  suite_add_tcase(s, tc_to_upper_18);

  tc_to_upper_19 = tcase_create("to_upper_19");
  tcase_add_test(tc_to_upper_19, to_upper_19);
  suite_add_tcase(s, tc_to_upper_19);

  tc_to_upper_20 = tcase_create("to_upper_20");
  tcase_add_test(tc_to_upper_20, to_upper_20);
  suite_add_tcase(s, tc_to_upper_20);

  tc_to_upper_21 = tcase_create("to_upper_21");
  tcase_add_test(tc_to_upper_21, to_upper_21);
  suite_add_tcase(s, tc_to_upper_21);

  tc_to_upper_22 = tcase_create("to_upper_22");
  tcase_add_test(tc_to_upper_22, to_upper_22);
  suite_add_tcase(s, tc_to_upper_22);

  tc_to_upper_23 = tcase_create("to_upper_23");
  tcase_add_test(tc_to_upper_23, to_upper_23);
  suite_add_tcase(s, tc_to_upper_23);

  tc_to_upper_24 = tcase_create("to_upper_24");
  tcase_add_test(tc_to_upper_24, to_upper_24);
  suite_add_tcase(s, tc_to_upper_24);

  tc_to_upper_25 = tcase_create("to_upper_25");
  tcase_add_test(tc_to_upper_25, to_upper_25);
  suite_add_tcase(s, tc_to_upper_25);

  TCase *tc_to_lower_1, *tc_to_lower_2, *tc_to_lower_3, *tc_to_lower_4,
      *tc_to_lower_5, *tc_to_lower_6, *tc_to_lower_7, *tc_to_lower_8,
      *tc_to_lower_9, *tc_to_lower_10, *tc_to_lower_11, *tc_to_lower_12,
      *tc_to_lower_13, *tc_to_lower_14, *tc_to_lower_15, *tc_to_lower_16,
      *tc_to_lower_17, *tc_to_lower_18, *tc_to_lower_19, *tc_to_lower_20;

  tc_to_lower_1 = tcase_create("to_lower_1");
  tcase_add_test(tc_to_lower_1, to_lower_1);
  suite_add_tcase(s, tc_to_lower_1);

  tc_to_lower_2 = tcase_create("to_lower_2");
  tcase_add_test(tc_to_lower_2, to_lower_2);
  suite_add_tcase(s, tc_to_lower_2);

  tc_to_lower_3 = tcase_create("to_lower_3");
  tcase_add_test(tc_to_lower_3, to_lower_3);
  suite_add_tcase(s, tc_to_lower_3);

  tc_to_lower_4 = tcase_create("to_lower_4");
  tcase_add_test(tc_to_lower_4, to_lower_4);
  suite_add_tcase(s, tc_to_lower_4);

  tc_to_lower_5 = tcase_create("to_lower_5");
  tcase_add_test(tc_to_lower_5, to_lower_5);
  suite_add_tcase(s, tc_to_lower_5);

  tc_to_lower_6 = tcase_create("to_lower_6");
  tcase_add_test(tc_to_lower_6, to_lower_6);
  suite_add_tcase(s, tc_to_lower_6);

  tc_to_lower_7 = tcase_create("to_lower_7");
  tcase_add_test(tc_to_lower_7, to_lower_7);
  suite_add_tcase(s, tc_to_lower_7);

  tc_to_lower_8 = tcase_create("to_lower_8");
  tcase_add_test(tc_to_lower_8, to_lower_8);
  suite_add_tcase(s, tc_to_lower_8);

  tc_to_lower_9 = tcase_create("to_lower_9");
  tcase_add_test(tc_to_lower_9, to_lower_9);
  suite_add_tcase(s, tc_to_lower_9);

  tc_to_lower_10 = tcase_create("to_lower_10");
  tcase_add_test(tc_to_lower_10, to_lower_10);
  suite_add_tcase(s, tc_to_lower_10);

  tc_to_lower_11 = tcase_create("to_lower_11");
  tcase_add_test(tc_to_lower_11, to_lower_11);
  suite_add_tcase(s, tc_to_lower_11);

  tc_to_lower_12 = tcase_create("to_lower_12");
  tcase_add_test(tc_to_lower_12, to_lower_12);
  suite_add_tcase(s, tc_to_lower_12);

  tc_to_lower_13 = tcase_create("to_lower_13");
  tcase_add_test(tc_to_lower_13, to_lower_13);
  suite_add_tcase(s, tc_to_lower_13);

  tc_to_lower_14 = tcase_create("to_lower_14");
  tcase_add_test(tc_to_lower_14, to_lower_14);
  suite_add_tcase(s, tc_to_lower_14);

  tc_to_lower_15 = tcase_create("to_lower_15");
  tcase_add_test(tc_to_lower_15, to_lower_15);
  suite_add_tcase(s, tc_to_lower_15);

  tc_to_lower_16 = tcase_create("to_lower_16");
  tcase_add_test(tc_to_lower_16, to_lower_16);
  suite_add_tcase(s, tc_to_lower_16);

  tc_to_lower_17 = tcase_create("to_lower_17");
  tcase_add_test(tc_to_lower_17, to_lower_17);
  suite_add_tcase(s, tc_to_lower_17);

  tc_to_lower_18 = tcase_create("to_lower_18");
  tcase_add_test(tc_to_lower_18, to_lower_18);
  suite_add_tcase(s, tc_to_lower_18);

  tc_to_lower_19 = tcase_create("to_lower_19");
  tcase_add_test(tc_to_lower_19, to_lower_19);
  suite_add_tcase(s, tc_to_lower_19);

  tc_to_lower_20 = tcase_create("to_lower_20");
  tcase_add_test(tc_to_lower_20, to_lower_20);
  suite_add_tcase(s, tc_to_lower_20);

  return s;
}

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