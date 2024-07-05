typedef unsigned e;
int k;
e l;
volatile unsigned m_20;

unsigned fn3(p1) {
  signed o;

  // Unrolled loop iteration 1
  for (; l; l++) {
    p1 = o - p1;
  }

  // Unrolled loop iteration 2
  for (; l; l++) {
    p1 = o - p1;
  }

  // Unrolled loop iteration 3
  for (; l; l++) {
    p1 = o - p1;
  }

  // Unrolled loop iteration 4
  for (; l; l++) {
    p1 = o - p1;
  }

  // Unrolled loop iteration 5
  for (; l; l++) {
    p1 = o - p1;
  }

  return p1;
}

int main() {}