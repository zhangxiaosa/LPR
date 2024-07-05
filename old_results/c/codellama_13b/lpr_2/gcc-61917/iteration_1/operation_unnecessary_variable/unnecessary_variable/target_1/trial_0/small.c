
int l;
int o;
volatile unsigned m[5][8];
int fn3(p1) {
  for (;;) {
    for (; l; l--) {
      // k is never used, so we can optimize it out
      for (; k >= -27; k -= 6)
        p1 = o - p1;
    }
    p1 || m[2][5];
  }
}
int main() {}
