int k;
unsigned l;
volatile unsigned m20;

unsigned fn3() {
  for (;;) {
    for (; l >= n; l -= n) {
      // Unrolled loop body executed n times
      k = 0;
      k -= 6;
      k = 0;
      k -= 6;
      // ...
      k = 0;
      k -= 6;
    }
  }
}

int main() {}
