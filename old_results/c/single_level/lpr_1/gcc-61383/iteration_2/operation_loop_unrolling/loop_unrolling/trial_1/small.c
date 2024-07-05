signed fn1(signed p1, signed p2) { return p2 == 0 ? p1 : p1 % p2; }
short fn2(short p1, int p2) { return p1; }
int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}
unsigned n;
signed o;
static unsigned p = 0x01B28DB7L;

int main() {
  int ab;
  signed ac = 0xE3L;

  // Iteration 1
  if (n < 12) {
    if (0x4F92L < fn2(p | (ab = fn1(o, o)), 6)) {
      // Do nothing
    } else {
      if (o <= ac) {
        // Do nothing
      } else if (ab) {
        break;
      }
    }
    n = fn3(n, 3);
  }

  // Iteration 2
  if (n < 12) {
    if (0x4F92L < fn2(p | (ab = fn1(o, o)), 6)) {
      // Do nothing
    } else {
      if (o <= ac) {
        // Do nothing
      } else if (ab) {
        break;
      }
    }
    n = fn3(n, 3);
  }

  // Iteration 3
  if (n < 12) {
    if (0x4F92L < fn2(p | (ab = fn1(o, o)), 6)) {
      // Do nothing
    } else {
      if (o <= ac) {
        // Do nothing
      } else if (ab) {
        break;
      }
    }
    n = fn3(n, 3);
  }

  // Iteration 4
  if (n < 12) {
    if (0x4F92L < fn2(p | (ab = fn1(o, o)), 6)) {
      // Do nothing
    } else {
      if (o <= ac) {
        // Do nothing
      } else if (ab) {
        break;
      }
    }
    n = fn3(n, 3);
  }

  return 0;
}