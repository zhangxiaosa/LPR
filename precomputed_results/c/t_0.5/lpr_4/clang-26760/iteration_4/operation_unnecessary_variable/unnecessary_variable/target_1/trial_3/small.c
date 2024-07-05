int g;
short fn1() {
  unsigned k;
  for (;;) {
    for (;; g -= 64) {
      k = k >> 4;
      if (g) {
        k = k << 0x24F96B7B;
        goto q;
      }
    }
  q:;
  }
}
int main() {}
