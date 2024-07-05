int k;
unsigned l;
volatile unsigned m[5][8];

unsigned fn3(unsigned p1) {
  for (; l; l -= 2) {
    // Unrolled iteration 1
    for (k = 0; k >= -27; k = k - 6)
      p1 = 0x4FL - p1;

    // Unrolled iteration 2
    for (k = 0; k >= -27; k = k - 6)
      p1 = 0x4FL - p1;
  }

  if (p1)
    m[2][5];
}

int main() {}