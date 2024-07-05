typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;
a fn1(a p1, a p2) { return p2 == 0 ? p1 : p1 % p2; }
b fn2(b p1, int p2) { return p1; }
c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}
a l;
f m;
d n;
a o;
static f p = 0x01B28DB7L;
e fn5(a);
c fn4(a p1, d p2, f p3) {
  if (fn5(o))
    ;
  return p2;
}
e fn5(p1) {
  c ab_1;
  c ab_2;
  c ab_3;
  c ab_4;
  c ab_5;
  c ab_6;
  c ab_7;
  c ab_8;
  c ab_9;
  c ab_10;
  c ab_11;

  if (n < 12) {
    ab_1 = fn1(p1, p1);
    ab_2 = fn1(p1, p1);
    ab_3 = fn1(p1, p1);
    ab_4 = fn1(p1, p1);
    ab_5 = fn1(p1, p1);
    ab_6 = fn1(p1, p1);
    ab_7 = fn1(p1, p1);
    ab_8 = fn1(p1, p1);
    ab_9 = fn1(p1, p1);
    ab_10 = fn1(p1, p1);
    ab_11 = fn1(p1, p1);

    if (0x4F92L < fn2(p | ab_1, 6)) {}
    else {
      a ac = 0xE3L;

      if (p1 > ac) {
        if (ab_1) {}
        else if (ab_2) {}
        else if (ab_3) {}
        else if (ab_4) {}
        else if (ab_5) {}
        else if (ab_6) {}
        else if (ab_7) {}
        else if (ab_8) {}
        else if (ab_9) {}
        else if (ab_10) {}
        else if (ab_11) {}
        else { n = fn3(n, 3); }
      }
    }
  }

  return m;
}
int main() {
  b u = 0L;
  if (fn4(u, l, u)) {}
}