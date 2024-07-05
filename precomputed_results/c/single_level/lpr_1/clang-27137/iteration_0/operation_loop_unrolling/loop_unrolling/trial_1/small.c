typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;

void fn1(d p1, int p2) {
  printf("checksum = %X\n", p1);
}

d h;
b o;
a p;

void fn2(p1) {
  h = p1;
}

void fn3(p1) {
  fn2(p1);
}

void fn4(e p1, char *p2, int p3) {
  fn3(p1);
}

int main() {
  int t = 0;
  b q;
  int i;
  b r = o;
  q = r;
  c s = 1L;

  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;

  if (p = q) ;

  fn4(p, "g_4689", t);
  fn1(h, t);

  return 0;
}