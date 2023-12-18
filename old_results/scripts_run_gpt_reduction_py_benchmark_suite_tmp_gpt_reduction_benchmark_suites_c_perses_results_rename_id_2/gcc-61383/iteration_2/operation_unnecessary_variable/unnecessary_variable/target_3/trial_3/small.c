int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned n;
int o;

int fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    if (o <= 0xE3L)
      ;
    else
      break;
  }
  return 0;
}

int main() { fn6(); }
