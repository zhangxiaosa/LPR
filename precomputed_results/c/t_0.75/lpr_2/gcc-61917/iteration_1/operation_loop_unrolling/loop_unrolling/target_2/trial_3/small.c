int k;
unsigned l1, l2, l3, l4;
volatile unsigned m[5][8];

unsigned fn3(p1) {
  signed o;

  for (;;) {
    // Unrolled loop 4 times
    for (; l1; l1--) {
      k = 0;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
    }

    for (; l2; l2--) {
      k = 0;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
    }

    for (; l3; l3--) {
      k = 0;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
    }

    for (; l4; l4--) {
      k = 0;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
    }

    p1 || m[2][5];
  }
}

int main() {}