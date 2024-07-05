
typedef int c;
typedef unsigned char d;
typedef int e;
typedef int g;
g fn2(g p1, g p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
g fn5(g p1, g p2) { return p2; }
g fn6(g p1, g p2) { return p1 - p2; }
int p;
int t;
c v;
int w;
g ab;
int ac = 1;
int fn10(g, int);
int fn12(int, int, int, int, g);
int fn13() {
  int ae = 1;
  fn10(v, t);
  return ae;
}
int fn10(g p1, int p2) {
  int af = 0x2F2F6D26;
  int ag = 248;
  fn12(2, ag, p2, 1, p1);
  return af;
}
int fn12(int p1, int p2, int p3, int p4, g p5) {
  int al = 3;
  c am = 1;
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
      int ao = 0xBCD1;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xE)), p2) & 1)
        v = 1;
    }
  return al;
}
int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
