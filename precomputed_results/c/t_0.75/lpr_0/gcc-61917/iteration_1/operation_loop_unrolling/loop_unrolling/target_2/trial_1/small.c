int k;
unsigned l;
volatile unsigned m[5][8];

unsigned fn3(p1) {
  int o;
  for (;;) {
    for (; l; l++) {
      // Loop unrolling - iteration 1
      k = 0;
      p1 = o - p1;

      // Loop unrolling - iteration 2
      k = -6;
      p1 = o - p1;

      // Loop unrolling - iteration 3
      k = -12;
      p1 = o - p1;

      // Loop unrolling - iteration 4
      k = -18;
      p1 = o - p1;

      // Loop unrolling - iteration 5
      k = -24;
      p1 = o - p1;

      // Loop unrolling - iteration 6
      k = -30;
      p1 = o - p1;
    }
    p1 || m[2][5];
  }
}

int main() {}
