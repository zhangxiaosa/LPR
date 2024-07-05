typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;

void fn1(d p1, int p2) { printf("checksum = %X\n", p1); }

d h;

void fn4(e p1, char *p2, int p3) { h = p1; }

b o;
a p;

a fn5() {
  b q;
  int i;
  b r = o;
  q = r;
  c s = 1L;
  for (i = 0; i < 10; i++)
    while (q > s)
      q -= 1;
  if (p = q)
    ;
}

int main() {
  int t = 0;
  fn5();
  h = p;
  h = p1;  // Inlined fn3 body: h = p1;
  fn1(h, t);
  return 0;
}