typedef char a;
typedef short b;
typedef int c;

b o;
a p;

int main() {
  b q;
  int i;
  b r = o;
  q = r;
  c s = 1L;

  // Unrolled loop
  for (i = 0; i < 10; i += 5) {
    while (q > s) {
      q -= 1;
      q -= 1;
      q -= 1;
      q -= 1;
      q -= 1;
    }
    while (q > s) {
      q -= 1;
      q -= 1;
      q -= 1;
      q -= 1;
      q -= 1;
    }
    while (q > s) {
      q -= 1;
      q -= 1;
      q -= 1;
      q -= 1;
      q -= 1;
    }
    while (q > s) {
      q -= 1;
      q -= 1;
      q -= 1;
      q -= 1;
      q -= 1;
    }
    while (q > s) {
      q -= 1;
      q -= 1;
      q -= 1;
      q -= 1;
      q -= 1;
    }
  }
  if (p = q)
    ;

  printf("checksum = %X\n", p);
  return 0;
}
