char fn1(char p1, char p2) {
  return p1 * p2;
}

int i;
signed h;

int *fn2(unsigned p1, int *p2, signed p3) {
  p3 = 6;

  // Loop unrolling
  char result1 = fn1(p3, i) && 1L;
  h ^= result1;

  char result2 = fn1(p3 - 1, i) && 1L;
  h ^= result2;

  char result3 = fn1(p3 - 2, i) && 1L;
  h ^= result3;

  char result4 = fn1(p3 - 3, i) && 1L;
  h ^= result4;

  char result5 = fn1(p3 - 4, i) && 1L;
  h ^= result5;

  char result6 = fn1(p3 - 5, i) && 1L;
  h ^= result6;

  char result7 = fn1(p3 - 6, i) && 1L;
  h ^= result7;

  char result8 = fn1(p3 - 7, i) && 1L;
  h ^= result8;

  char result9 = fn1(p3 - 8, i) && 1L;
  h ^= result9;

  char result10 = fn1(p3 - 9, i) && 1L;
  h ^= result10;

  char result11 = fn1(p3 - 10, i) && 1L;
  h ^= result11;

  char result12 = fn1(p3 - 11, i) && 1L;
  h ^= result12;

  char result13 = fn1(p3 - 12, i) && 1L;
  h ^= result13;

  char result14 = fn1(p3 - 13, i) && 1L;
  h ^= result14;

  return p2;
}

int main() {
  return 0;
}