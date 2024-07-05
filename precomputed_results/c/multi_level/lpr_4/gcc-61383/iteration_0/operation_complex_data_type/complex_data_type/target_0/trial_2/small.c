int fn1(int p1, int p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned m;
unsigned n;
int o;
short fn6() {
  int ab;
  for (; n < 12; n = fn3(n, 3)) {
    int temp1 = o;
    int temp2 = o;
    ab = fn1(temp1, temp2);
    if (0x4F92L < ab) {
      ;
    } else {
      int ac = 0xE3L;
      if (o <= ac) {
        ;
      } else if (ab) {
        break;
      }
    }
  }
  return m;
}

int main() {
  fn6();
}
