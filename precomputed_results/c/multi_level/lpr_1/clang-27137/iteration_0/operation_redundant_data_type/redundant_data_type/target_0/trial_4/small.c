typedef short b;
typedef int c;
typedef unsigned d;

void fn1(d p1, int p2) {
  printf("checksum = %X\n", p1);
}

b o;
char p;

int main() {
  int i;
  b r = o;
  c s = 1L;

  for (i = 0; i < 10; i++) {
    while (r > s) {
      r -= 1;
    }
  }

  if (p = r) {
    // Do something if p is assigned r.
  }

  fn1(r, 0);

  return 0;
}