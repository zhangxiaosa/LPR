int k;
unsigned l;
volatile unsigned m20;

unsigned fn3(p1) {
  signed o;
  for (;;) {
    for (; l; l++) {
      // Unrolled loop body
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
    }
    p1 || m20;
  }
}

int main() {}
