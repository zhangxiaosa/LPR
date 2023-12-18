unsigned k;
unsigned m[4];
unsigned n0;
unsigned r;
unsigned s;
unsigned v;
unsigned w;
unsigned a;

unsigned fn3() {
  r = 0;
  s = 0;
  v = 0;
  w = 0;
  a = 0;

  for (; w; w += 1) {
    for (s = 0; s <= 39; ++s) {
      for (r = 0; r <= 2; r += 1) {
        n0 = v;
        v = m[r];
        w = n0 && k;

        for (; a; a += 1) {
          n0 = 0;
        }
      }
    }
  }

  return 0;
}

int main() {}
