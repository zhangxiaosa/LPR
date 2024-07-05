typedef signed a;

typedef short b;

typedef int c;

typedef unsigned d;

typedef short e;

typedef unsigned f;

a fn1(a p1, a p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

b fn2(b p1, int p2) {
  return p1;
}

c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

a l;

f m;

d n;

a o;

static f p = 0x01B28DB7L;

e fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    a ab = o == 0 ? o : o % 0;
    if (0x4F92L < p | ab) {
    } else {
      a ac = 0xE3L;
      if (o > ac) {
        if (ab) {
          break;
        }
      } else {
      }
    }
  }
  return m;
}

int main() {
  for (; n < 12; n = fn3(n, 3)) {
    a ab = o == 0 ? o : o % 0;
    if (0x4F92L < p | ab) {
    } else {
      a ac = 0xE3L;
      if (o > ac) {
        if (ab) {
          break;
        }
      }
    }
  }
  return m;
}