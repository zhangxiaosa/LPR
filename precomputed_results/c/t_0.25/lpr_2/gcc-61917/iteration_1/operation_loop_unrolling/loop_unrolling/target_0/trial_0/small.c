int k;
unsigned l;
volatile unsigned m[5][8];

unsigned fn3(p1) {
  signed o;
  for (;;) {
    for (; l >= 4; l -= 4) {
      // Unrolled iteration 1
      p1 = o - p1;

      // Unrolled iteration 2
      p1 = o - p1;

      // Unrolled iteration 3
      p1 = o - p1;

      // Unrolled iteration 4
      p1 = o - p1;
    }
    p1 || m[2][5];
  }
}

int main() {}
