typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
unsigned h;
void fn2(e p1) { h = p1; }
void fn3(e p1) { fn2(p1); }
void fn4(e p1, char *p2, int p3) { fn3(p1); }
short o;
char p;
int main() {
  int t = 0;
  short q;
  short r = o;
  q = r;
  int s = 1L;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  while (q > s)
    q -= 1;
  if (p = q)
    ;
  fn4(p, "g_4689", t);
  printf("checksum = %X\n", h);
  return 0;
}