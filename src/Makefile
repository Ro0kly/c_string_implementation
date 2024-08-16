CC=gcc
TESTFLAGS=-lcheck
GCCFLAGS=-Wall -Werror -Wextra -std=c11
GCOVFLAGS=-fprofile-arcs -ftest-coverage
LIB_SOURCES=s21_insert.c s21_memchr.c s21_memcmp.c s21_memcpy.c s21_memset.c s21_sprintf.c s21_strchr.c s21_strcspn.c s21_strerror.c s21_strlen.c s21_strncat.c s21_strncmp.c s21_strncpy.c s21_strpbrk.c s21_strrchr.c s21_strstr.c s21_strtok.c s21_to_lower.c s21_to_upper.c s21_trim.c
CHECK=-I/opt/homebrew/include -L/opt/homebrew/lib

all: clean s21_string.a

s21_string.a: clean
	$(CC) $(GCCFLAGS) -c $(LIB_SOURCES)
	ar rcs s21_string.a *.o

gcov_report: clean s21_string.a
	$(CC) $(GCCFLAGS) $(TESTFLAGS) $(GCOVFLAGS) $(LIB_SOURCES) test_s21_string.c -o gcovreport
	./gcovreport
	lcov -t "gcovreport" -o gcovreport.info -c -d .
	genhtml -o report gcovreport.info
	open report/index.html

clean:
	rm -rf *.o *.a *.gcda *.gcno *.gcov ./report *.info gcovreport *.out

rebuild: clean all