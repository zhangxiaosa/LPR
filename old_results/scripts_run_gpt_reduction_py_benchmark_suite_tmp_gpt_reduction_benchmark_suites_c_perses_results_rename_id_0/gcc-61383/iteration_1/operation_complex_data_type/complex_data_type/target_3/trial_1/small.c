unsigned int fn1(unsigned int fn1_p1, unsigned int p2) { return p2 == 0 ? fn1_p1 : fn1_p1 % p2; }

int fn3(int fn3_p1, int p2) {
  return (fn3_p1 && p2 && fn3_p1 > 2147483647 - p2) || (fn3_p1 < 0 && p2 < 0 && fn3_p1) ? fn3_p1 : fn3_p1 + p2;
}

unsigned int n;
int o;

int main() {
  for (; n < 12; n = fn3(n, 3)) {
    int temp;
    int oValue = o;
    if (0x4F92L < (temp = fn1((unsigned int)oValue, (unsigned int)oValue), 6)) {
    } else if (oValue <= 0xE3L) {
    } else if (temp)
      break;
  }
  return 0;
}