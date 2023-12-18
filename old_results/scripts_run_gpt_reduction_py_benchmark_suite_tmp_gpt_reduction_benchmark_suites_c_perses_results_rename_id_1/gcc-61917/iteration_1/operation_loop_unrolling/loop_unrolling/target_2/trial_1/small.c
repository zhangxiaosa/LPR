int k;
unsigned l;
volatile unsigned m[5][8];

unsigned fn3(p1) {
  for (;;) {
    for (; l; l++)
      p1 = 24 - p1;

    if (p1)
      m[2][5];

    if (l >= 0)
      l -= 1;

    // Unrolled loop body
    p1 = 24 - p1;
    p1 = 24 - p1;
    p1 = 24 - p1;
    p1 = 24 - p1;
    p1 = 24 - p1;

    if (p1)
      m[2][5];

    if (l >= 0)
      l -= 1;
  }
}

int main() {}