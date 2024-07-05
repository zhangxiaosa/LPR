typedef unsigned e;
int k;
e l;
volatile unsigned m_20;

unsigned fn3(p1) {
  signed o;

  // Unrolled loop iteration 1
  for (; l; l++) {
    // Unrolled iteration 1
    k = 0;
    if (k >= -27) {
      p1 = o - p1;
    }
    k = k - 6;
    if (k >= -27) {
      p1 = o - p1;
    }
    k = k - 6;
    if (k >= -27) {
      p1 = o - p1;
    }

    // Unrolled iteration 2
    k = 0;
    if (k >= -27) {
      p1 = o - p1;
    }
    k = k - 6;
    if (k >= -27) {
      p1 = o - p1;
    }
    k = k - 6;
    if (k >= -27) {
      p1 = o - p1;
    }

    // Unrolled iteration 3
    k = 0;
    if (k >= -27) {
      p1 = o - p1;
    }
    k = k - 6;
    if (k >= -27) {
      p1 = o - p1;
    }
    k = k - 6;
    if (k >= -27) {
      p1 = o - p1;
    }
  }

  return p1;
}

int main() {}
