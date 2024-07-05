int fn2(unsigned p1, unsigned p2) {
  return p1 - p2;
}

int k;
unsigned l;
volatile unsigned m[5][8];

unsigned fn3(unsigned p1) {
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -108; k = k - 24)
        p1 = fn2(0x4FL, p1);
    p1 || 0; // p1 is still used here, but m[2][5] is removed
  }
}

int main() {}