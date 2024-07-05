int k;
unsigned l;
volatile unsigned m[5][8];

unsigned fn3(p1) {
  signed o;
  for (;;) {
    // Unrolled loop iteration 1
    for (; l; l++) {
      // Unrolled iteration 1
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
    }

    // Unrolled loop iteration 2
    for (; l; l++) {
      // Unrolled iteration 2
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
    }
  }
}

int main() {}
