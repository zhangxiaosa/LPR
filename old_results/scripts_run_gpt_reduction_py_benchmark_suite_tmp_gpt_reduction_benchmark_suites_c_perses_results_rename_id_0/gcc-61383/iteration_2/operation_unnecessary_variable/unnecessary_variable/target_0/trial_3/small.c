int fn3(int fn3_p1, int p2) {
  return fn3_p1 && p2 && fn3_p1 > 2147483647 - p2 || fn3_p1 < 0 && p2 < 0 && fn3_p1 ? fn3_p1 : fn3_p1 + p2;
}

unsigned n;

int main() {
  for (; n < 12; n = fn3(n, 3)) {
    if (0x4F92L < 6) {
    } else if (0 > 0xE3L) {
    } else if (0) {
      break;
    }
  }
  return 0;
}