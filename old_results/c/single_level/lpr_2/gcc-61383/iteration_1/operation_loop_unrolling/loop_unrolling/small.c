typedef short b;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;
signed fn1(signed p1, signed p2) { return p2 == 0 ? p1 : p1 % p2; }
b fn2(b p1, int p2) { return p1; }
c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}
f m;
d n;
signed o;
static f p = 0x01B28DB7L;
e fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    c ab;
    if (0x4F92L < fn2(p | (ab = fn1(o, o)), 6))
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab)
      break;
  }
  return m;
}
int main() { fn6(); }
