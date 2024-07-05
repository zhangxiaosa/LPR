int k;
unsigned l;
volatile unsigned m[5][8];

unsigned fn3(unsigned p1) {
  for (;;) {
    for (; l; l++) {
      // Unrolled loop with k = 0
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;
      p1 = 0x4FL - p1;

      // Update k manually instead of looping
      k = -24;
    }
    p1 || m[2][5];
  }
}

int main() {}