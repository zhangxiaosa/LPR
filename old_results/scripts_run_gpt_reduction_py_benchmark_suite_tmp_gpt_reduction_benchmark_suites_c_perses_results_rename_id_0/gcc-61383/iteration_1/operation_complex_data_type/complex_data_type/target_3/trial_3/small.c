unsigned int fn1(unsigned int fn1_p1, unsigned int p2) {
  unsigned int result;
  if (p2 == 0)
    result = fn1_p1;
  else
    result = fn1_p1 % p2;
  return result;
}

int fn3(int fn3_p1, int p2) {
  int result;
  if (fn3_p1 && p2 && fn3_p1 > 2147483647 - p2 || fn3_p1 < 0 && p2 < 0 && fn3_p1)
    result = fn3_p1;
  else
    result = fn3_p1 + p2;
  return result;
}

unsigned int n = 0;
int o = 0;

int main() {
  for (; n < 12; n = fn3(n, 3)) {
    int temp;
    int oValue = o;
    if (0x4F92L < (temp = fn1(oValue, oValue), 6)) {
    } else if (oValue <= 0xE3L) {
    } else if (temp)
      break;
  }
  return 0;
}