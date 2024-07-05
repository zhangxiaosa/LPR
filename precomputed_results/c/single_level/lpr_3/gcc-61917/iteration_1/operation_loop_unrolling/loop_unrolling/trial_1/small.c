int k;
unsigned l;
volatile unsigned m2_5;
unsigned fn3(p1) {
  for (;;) {
    for (; l; l++) {
      // Unroll the loop by 3
      k = 0;
      p1 = 0x4F - p1;
      k = k - 6;
      p1 = 0x4F - p1;
      k = k - 6;
      p1 = 0x4F - p1;
    }
    p1 || m2_5;
  }
}

int main() {
  // Your program's main logic here
}