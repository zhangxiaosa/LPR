typedef short b;

typedef int c;

typedef unsigned d;

int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }

b fn2(b p1, int p2) { return p1; }

c fn3(c p1, c p2) {

  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

int l;
d m;
d n;
int o;

static d p = 0x01B28DB7L;

b fn5(int);

c fn4(int p1, d p2, d p3) {
  if (fn5(o))
    ;
  return p2;
}

b fn5(p1) {
  for (; n < 12; n = fn3(n, 3)) {
    c ab;
    if (0x4F92L < fn2(p | (ab = fn1(p1, p1)), 6))
      ;
    else {
      int ac = 0xE3L;
      if (p1 <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return m;
}

int main() {
  b u = 0L;
  if (fn4(u, l, u))
    ;
}