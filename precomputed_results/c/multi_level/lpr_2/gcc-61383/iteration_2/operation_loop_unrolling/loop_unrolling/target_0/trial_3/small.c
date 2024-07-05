int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }

int fn2(short p1) { return p1; }

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned n;
int o;
int main() {
  int ab;

  if (0x4F92L < fn2(0x01B28DB7L | (ab = fn1(o, o)))) {
    // Do nothing
  } else if (o <= 0xE3L) {
    // Do nothing
  } else if (ab) {
    break;
  }

  n = fn3(fn3(fn3(fn3(fn3(fn3(fn3(fn3(fn3(fn3(fn3(n, 3), 3), 3), 3), 3), 3), 3), 3), 3), 3), 3);

  return 0;
}