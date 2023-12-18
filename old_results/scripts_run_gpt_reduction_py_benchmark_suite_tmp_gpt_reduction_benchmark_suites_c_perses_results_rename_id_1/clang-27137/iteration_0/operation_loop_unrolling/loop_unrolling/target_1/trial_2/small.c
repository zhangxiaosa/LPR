typedef char a;

typedef short b;

typedef int c;

typedef unsigned d;

void fn1(d p1, int p2) { printf("checksum = %X\n", p1); }

b o;
a p;

int main() {
  b r = o;
  c s = 1L;

  if (r > s)
    r -= 1;

  fn1(r, 0);

  return 0;
}