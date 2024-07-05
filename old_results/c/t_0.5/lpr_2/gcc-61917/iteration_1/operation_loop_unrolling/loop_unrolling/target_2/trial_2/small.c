typedef unsigned e;
int k;
e l;
volatile unsigned m_20;

unsigned fn3(p1) {
  signed o;

  // Unrolled loop iteration 1
  for (; l; l++) {
    k = 0;
    p1 = o - p1;
    k = -6;
    p1 = o - p1;
    k = -12;
    p1 = o - p1;
    k = -18;
    p1 = o - p1;
    k = -24;
    p1 = o - p1;
    k = -30;
    p1 = o - p1;
  }

  // Unrolled loop iteration 2
  for (; l; l++) {
    k = 0;
    p1 = o - p1;
    k = -6;
    p1 = o - p1;
    k = -12;
    p1 = o - p1;
    k = -18;
    p1 = o - p1;
    k = -24;
    p1 = o - p1;
    k = -30;
    p1 = o - p1;
  }

  // ... Repeat unrolled loop iterations n times

  // Unrolled loop iteration n
  for (; l; l++) {
    k = 0;
    p1 = o - p1;
    k = -6;
    p1 = o - p1;
    k = -12;
    p1 = o - p1;
    k = -18;
    p1 = o - p1;
    k = -24;
    p1 = o - p1;
    k = -30;
    p1 = o - p1;
  }

  return p1;
}

int main() {}
