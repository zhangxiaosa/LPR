unsigned int n;
int o;
int temp;

int fn1(int p1, int p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

int main() {
  for (; n < 12; n = fn3(n, 3)) {
    if (0x4F92L < (temp = fn1(o, o), 6)) {
    }
    else if (o <= 0xE3L) {
    }
    else if (temp)
      break;
  }
  return 0;
}