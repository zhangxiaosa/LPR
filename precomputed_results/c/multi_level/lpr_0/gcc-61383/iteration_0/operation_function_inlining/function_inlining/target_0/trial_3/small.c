typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;
b fn2(b p1, int p2) { return p1; }
c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1
             ? p1
             : p1 + p2;
}
a o;
static f p = 0x01B28DB7L;
c fn4(a, d, f);
e fn6() {
  b u = 0L;
  if (fn5(o))
    ;
  return q;
}
c fn4(a p1, d p2, f p3) {
  if (o == 0 ? p1 : p1 % o)
    ;
  return p2;
}
int main() { fn6(); }
