unsigned fn1(int fn1_p1, int p2) { return p2 == 0 ? fn1_p1 : fn1_p1 % p2; }

int fn3(int fn3_p1, int p2) {
  return fn3_p1 && p2 && fn3_p1 > 2147483647 - p2 ||
                 fn3_p1 < 0 && p2 < 0 && fn3_p1
             ? fn3_p1
             : fn3_p1 + p2;
}

unsigned n;
int o;
int main() {
  for (; n < 12; n = fn3(n, 3)) {
    if (0x4F92L < (fn1(o, o), 6)) {
    } else if (o <= 0xE3L) {
    } else if (fn1(o, o))
      break;
  }
  return 0;
}