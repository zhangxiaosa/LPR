typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
void fn1(unsigned int p1, int p2) { printf("checksum = %X\n", p1); }
unsigned int h;short o;char p;
void fn2(d p1) { h = p1; }
void fn3(d p1) { fn2(p1); }
void fn4(unsigned int p1, char *p2, int p3) { fn3(p1); }
int main() {
  int t = 0;
  short q;
  int i;
  short r = o;
  q = r;
  int s = 1L;
  for (i = 0; i < 10; i++)
    while (q > s)
      q -= 1;
  if (p = q)
    ;
  fn4(p, "g_4689", t);
  fn1(h, t);
  return 0;
}