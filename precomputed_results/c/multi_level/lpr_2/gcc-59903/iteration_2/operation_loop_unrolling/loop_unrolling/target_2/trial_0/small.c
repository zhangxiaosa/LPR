unsigned k;
unsigned m[4];
unsigned n0;

unsigned fn3() {
  unsigned r;
  unsigned s;
  unsigned v;
  unsigned w;
  unsigned a;
  
  for (; w; w += 1) {
    for (s = 0; s <= 39; ++s) {
      // Unrolled loop body (Iteration 0)
      n0 = v;
      v = m[0];
      w = n0 && k;
      for (; a; a += 1)
        n0 = 0u;

      // Unrolled loop body (Iteration 1)
      n0 = v;
      v = m[1];
      w = n0 && k;
      for (; a; a += 1)
        n0 = 0u;

      // Unrolled loop body (Iteration 2)
      n0 = v;
      v = m[2];
      w = n0 && k;
      for (; a; a += 1)
        n0 = 0u;
    }
  }
  
  return 0;
}

int main() {}