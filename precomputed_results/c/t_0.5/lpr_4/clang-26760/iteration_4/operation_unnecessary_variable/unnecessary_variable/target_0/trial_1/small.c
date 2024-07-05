short fn1() {
  int j = 0x24F96B7B;
  unsigned k;
  for (;;) {
    for (;; j -= 64) {
      k = k >> 4;
      if (0) {
        k = k << j;
        goto q;
      }
    }
  q:;
  }
}
int main() {}
