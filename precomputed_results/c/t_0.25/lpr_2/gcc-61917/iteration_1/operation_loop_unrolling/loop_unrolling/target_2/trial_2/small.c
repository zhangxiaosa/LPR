int k;
unsigned l;
volatile unsigned m[5][8];

unsigned fn3(p1) {
  p1 || m[2][5];

  // Unrolled loop iteration 1
  for (l = 0; l; l++) {
    p1 = 0 - p1;
  }

  // Unrolled loop iteration 2
  for (l = 0; l; l++) {
    p1 = -6 - p1;
  }
}

int main() {}
