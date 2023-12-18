unsigned k;
unsigned m[4];
unsigned n0;

unsigned fn3() {
  unsigned r;
  unsigned s_unrolled;
  unsigned v;
  unsigned w;
  unsigned a;

  for (; w; w += 1) {
    for (s_unrolled = 0; s_unrolled <= 39; s_unrolled += 40) {
      // Loop unrolled body 0
      r = 0;
      n0 = v;
      v = m[r];
      w = n0 && k;
      for (; a; a += 1)
        n0 = 0u;

      // Loop unrolled body 1
      r = 0;
      n0 = v;
      v = m[r];
      w = n0 && k;
      for (; a; a += 1)
        n0 = 0u;

      // Loop unrolled body 2
      r = 0;
      n0 = v;
      v = m[r];
      w = n0 && k;
      for (; a; a += 1)
        n0 = 0u;

      // ...

      // Loop unrolled body 39
      r = 0;
      n0 = v;
      v = m[r];
      w = n0 && k;
      for (; a; a += 1)
        n0 = 0u;
    }
  }

  return 0;
}

int main() {}