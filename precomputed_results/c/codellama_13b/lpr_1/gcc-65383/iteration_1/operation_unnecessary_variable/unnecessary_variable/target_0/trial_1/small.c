c
int fn1() {
  for (;;) {
    int r3[5];
    if (r3[0x06D7])
      return 0xC3L;
    r3[0x06D7] = r3[0x06D7];
  }
}
int main() { fn1(); }
