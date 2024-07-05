unsigned m[4];
unsigned n0;

void fn3() {
  unsigned r;
  unsigned s;
  unsigned v = m[0];

  for (; s <= 39; ++s) {
    for (r = 0; r <= 2; r += 1) {
      n0 = v;
      v = m[r];
      for (; a; a += 1)
        n0 = 0u;
    }
  }
}

int main() {}
