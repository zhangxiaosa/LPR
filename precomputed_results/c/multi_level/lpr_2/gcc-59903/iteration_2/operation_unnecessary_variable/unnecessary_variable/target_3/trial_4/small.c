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
        n0 = m[r]; // Step 1: Constant propagation
        w = n0 && k; // Step 2: Constant propagation
        for (; a; a += 1)
          ; // Step 3: Remove unused statement
      }
  return 0;
}
int main() {}