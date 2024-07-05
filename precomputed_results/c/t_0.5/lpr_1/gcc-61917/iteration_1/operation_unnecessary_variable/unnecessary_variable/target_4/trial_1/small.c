int k;
unsigned l;
volatile unsigned m20;

unsigned fn3(p1) {
  signed o;
  for (;;) {
    for (; l; l++) {
      for (k = 0; k >= -27; k -= 6) {
        p1 = (o - p1); // Copy propagation applied
      }
    }
  }
}

int main() {}