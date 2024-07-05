unsigned fn2(unsigned p1, unsigned p2) { return p1 - p2; }
int k;
unsigned l;
volatile unsigned m2_5;
unsigned fn3(unsigned p1) {
  for (;;) {
    for (l = 0; l < 20; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1 = fn2(0x4F, p1);
    p1 || m2_5;
  }
}
int main() {}
