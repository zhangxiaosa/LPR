unsigned k;
unsigned m[4];
unsigned n0;

unsigned fn3() {
  unsigned r;
  unsigned s;
  unsigned v = m[0];
  unsigned a;

  for (s = 0; s <= 39; ++s) {
    for (r = 0; r <= 2; r += 1) {
      n0 = v;
      v = m[r];
      n0 = 0u;
    }
  }
  return 0;
}

int main() {}
