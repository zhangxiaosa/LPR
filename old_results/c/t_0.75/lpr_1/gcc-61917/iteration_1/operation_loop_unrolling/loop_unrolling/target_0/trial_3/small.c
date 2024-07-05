int k;
unsigned l;
volatile unsigned m[5][8];
unsigned p1;
unsigned o;

int main() {
  for (; l; l += 3)
  {
    // Unrolled iteration 1
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

    // Unrolled iteration 2
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

    // Unrolled iteration 3
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
  }

  if (p1)
    m[2][5];
}