unsigned k;
unsigned m[4];
unsigned n0;
unsigned fn3() {
  unsigned r;
  unsigned s;
  unsigned v;
  unsigned w;
  unsigned a;

  // Unrolled loop iteration 1
  n0 = v;
  v = m[0];
  w = n0 && k;
  for (; a; a += 1)
    n0 = 0u;

  // Unrolled loop iteration 2
  n0 = v;
  v = m[1];
  w = n0 && k;
  for (; a; a += 1)
    n0 = 0u;

  // Unrolled loop iteration 3
  n0 = v;
  v = m[2];
  w = n0 && k;
  for (; a; a += 1)
    n0 = 0u;

  return 0;
}

int main() {}