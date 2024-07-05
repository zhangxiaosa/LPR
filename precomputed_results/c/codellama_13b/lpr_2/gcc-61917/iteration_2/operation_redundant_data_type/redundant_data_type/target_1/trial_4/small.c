
volatile unsigned k;
volatile unsigned l;
volatile unsigned o;
volatile unsigned m;
int fn3(volatile unsigned p1) {
  for (;;) {
    for (; l; l--) {
      k = 0;
      for (; k >= -27; k -= 6)
        p1 = o - p1;
    }
    p1 || m;
  }
}
int main() {}
