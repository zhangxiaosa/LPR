int k;
unsigned l;
volatile unsigned m[5][8];

unsigned fn3(p1) {
  signed o;

  // Unrolled loop iteration 1
  for (l = 0; l; l++) {
    for (k = 0; k >= -27; k = k - 6) {
      p1 = o - p1;
    }
  }

  // Unrolled loop iteration 2
  for (l = 0; l; l++) {
    for (k = 0; k >= -27; k = k - 6) {
      p1 = o - p1;
    }
  }
}

int main() {}
