typedef signed a;
typedef short b;
typedef int c;
a g;

b fn1() {
  c j = 0x24F96B7BL;
  unsigned k;

  // Unrolled loop
  if (j >= 1) {
    --j;
  }

  c m = j;

  // Unrolled loop body
  k = k >> 1L;

  if (g) {
    k = k << m;
    k = k >> 1L;

    if (g) {
      k = k << m;
      k = k >> 1L;

      if (g) {
        k = k << m;
        // Repeat the above block as needed
      }
    }
  }
}

int main() {}
