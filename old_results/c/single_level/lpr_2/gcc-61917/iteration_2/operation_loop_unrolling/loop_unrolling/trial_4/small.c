int k;
unsigned l;
volatile unsigned m[5][8];
unsigned fn3(p1) {
  for (;;) {
    l = 0;

    // Unrolled loop iteration 1
    p1 = 0x4F - p1;
    p1 || m[2][5];

    // Unrolled loop iteration 2
    p1 = 0x4F - p1;
    p1 || m[2][5];

    // Unrolled loop iteration 3
    p1 = 0x4F - p1;
    p1 || m[2][5];

    // Unrolled loop iteration 4
    p1 = 0x4F - p1;
    p1 || m[2][5];

    // Unrolled loop iteration 5
    p1 = 0x4F - p1;
    p1 || m[2][5];
  }
}

int main() {}