int k;
unsigned l1, l2, l3, l4;
volatile unsigned m[5][8];

unsigned fn3(p1) {
  signed o;

  for (;;) {
    // Unrolled loop 4 times
    for (; l1; l1--) {
      // Unrolled loop 5 times
      for (k = 0; k >= -27; k = k - 6) {
        p1 = o - p1;
      }
      
      for (k = 0; k >= -27; k = k - 6) {
        p1 = o - p1;
      }
      
      for (k = 0; k >= -27; k = k - 6) {
        p1 = o - p1;
      }
      
      for (k = 0; k >= -27; k = k - 6) {
        p1 = o - p1;
      }
      
      for (k = 0; k >= -27; k = k - 6) {
        p1 = o - p1;
      }
    }

    for (; l2; l2--) {
      for (k = 0; k >= -27; k = k - 6) {
        p1 = o - p1;
      }
    }

    for (; l3; l3--) {
      for (k = 0; k >= -27; k = k - 6) {
        p1 = o - p1;
      }
    }

    for (; l4; l4--) {
      for (k = 0; k >= -27; k = k - 6) {
        p1 = o - p1;
      }
    }

    p1 || m[2][5];
  }
}

int main() {}