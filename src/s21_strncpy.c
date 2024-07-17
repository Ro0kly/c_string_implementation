char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  const char *p1 = src;
  for (s21_size_t i = 0; i < n; i++) {
    dest[i] = p1[i];
  }
  return dest;
}