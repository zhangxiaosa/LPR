int k;
unsigned l;
volatile unsigned m[5][8];

unsigned fn3(p1) {
  signed o;
  for (;;) {
    // Unrolled loop iteration 1
    if (l) {
      for (k = 0; k >= -27; k = k - 6) {
        p1 = o - p1;
      }
    }

    // Unrolled loop iteration 2
    if (l) {
      for (k = 0; k >= -27; k = k - 6) {
        p1 = o - p1;
      }
    }
  }
}

int main() {}
