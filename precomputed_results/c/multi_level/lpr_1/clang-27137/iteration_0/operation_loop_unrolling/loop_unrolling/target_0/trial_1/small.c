typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;

void fn1(d p1, int p2) {
  printf("checksum = %X\n", p1);
}

b o;
a p;

int main() {
  int i;
  b r = o;
  c s = 1L;

  // Unrolled loop
  for (i = 0; i < 10; i += 2) {
    while (r > s) {
      r -= 1;
    }

    while (r > s) {
      r -= 1;
    }
  }

  if (p = r)
    ;
  fn1(p, 0);
  return 0;
}