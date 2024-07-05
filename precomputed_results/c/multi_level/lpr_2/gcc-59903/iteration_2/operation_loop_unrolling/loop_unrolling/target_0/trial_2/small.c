unsigned k;
unsigned m[4];
unsigned n0;

unsigned fn3() {
  unsigned r;
  unsigned s;
  unsigned v;
  unsigned w;
  unsigned a;

  for (; w; w += 1)
    for (s = 0; s <= 39; ++s)
      for (r = 0; r <= 2; r += 1) {
        n0 = v;
        v = m[r];
        w = n0 && k;

        // Unrolled loop (4 iterations)
        n0 = 0u;
        ++a;
        n0 = 0u;
        ++a;
        n0 = 0u;
        ++a;
        n0 = 0u;
        ++a;
      }
  return 0;
}

int main() {}