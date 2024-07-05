int k;
unsigned l;
volatile unsigned m[5][8];
unsigned fn3(unsigned p1) {
  for (;;) {
    for (; l; l++) {
      // Unrolled iteration 1
      k = 0;
      // Code here

      // Unrolled iteration 2
      k = -6;
      // Code here

      // Unrolled iteration 3
      k = -12;
      // Code here

      // Unrolled iteration 4
      k = -18;
      // Code here

      // Unrolled iteration 5
      k = -24;
      // Code here
    }
    if (p1)
      m[2][5];
  }
}

int main() {}