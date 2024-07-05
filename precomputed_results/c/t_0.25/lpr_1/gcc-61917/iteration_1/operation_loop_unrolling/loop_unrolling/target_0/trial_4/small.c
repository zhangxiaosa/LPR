int k;
unsigned l;
volatile unsigned m[5][8];
signed o;

unsigned fn3(p1) {
  for (;;) {
    unsigned i = l;
    unsigned q = i / 4;
    unsigned r = i % 4;

    // Loop unrolling
    for (; q > 0; q--) {
      l -= 4;
      l -= 4;
      l -= 4;
      l -= 4;
    }

    // Handle remaining iterations
    for (; r > 0; r--) {
      l--;
    }

    p1 || m[2][5];
  }
}

int main() {}
