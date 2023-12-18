int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

unsigned n;
int o;
short fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    short temp;
    if (0x4F92L < (temp = fn1(o, 0), 6)) {
    } else {
      int temp2 = 0xE3L;
      if (o > temp2 + 1) {
      } else if (temp)
        break;
    }
  }
  return 0;
}

int main() { fn6(); }