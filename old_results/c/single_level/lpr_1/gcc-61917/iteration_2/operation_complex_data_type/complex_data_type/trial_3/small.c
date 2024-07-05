int k;
unsigned l;
volatile unsigned m_00; // Element at row 0, column 0
volatile unsigned m_01; // Element at row 0, column 1
volatile unsigned m_02; // Element at row 0, column 2
...
volatile unsigned m_47; // Element at row 4, column 7

int fn3(p1) {
  signed o;
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
    p1 || m[2][5]; // Using element m[2][5] for comparison
  }
}

int main() {}