int k;
unsigned l;
volatile unsigned m[5][8];
unsigned fn3(unsigned p1) {
  for (; l; l++) {
    // Unrolled loop iteration 1
    k = 0;
    p1 = 0x4FL - p1;

    // Unrolled loop iteration 2
    k = k - 6;
    p1 = 0x4FL - p1;

    // Unrolled loop iteration 3
    k = k - 6;
    p1 = 0x4FL - p1;

    // Unrolled loop iteration 4
    k = k - 6;
    p1 = 0x4FL - p1;

    // Unrolled loop iteration 5
    k = k - 6;
    p1 = 0x4FL - p1;
  }

  if (p1) {
    // Removed unused variable m[2][5]
  }
}

int main() {}
