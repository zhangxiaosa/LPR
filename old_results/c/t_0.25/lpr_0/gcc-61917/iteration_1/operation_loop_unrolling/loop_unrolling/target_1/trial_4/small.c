unsigned l;
volatile unsigned m[5][8];
unsigned fn3(unsigned p1) {
  for (;;) {
    // Unrolled loop iterations
    for (; l; l++) {
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
    }
    if (p1)
      m[2][5];
  }
}
int main() {}
