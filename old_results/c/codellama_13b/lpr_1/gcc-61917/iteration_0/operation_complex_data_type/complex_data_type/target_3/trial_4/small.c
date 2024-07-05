
unsigned fn1(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned fn2(unsigned p1, unsigned p2) { return p1 - p2; }

int k;
unsigned l;
volatile unsigned m[5][8];

unsigned fn3(unsigned p1) {
  short o;
  for (;;) {
    for (; l; l++) {
      unsigned m_cache[5][8];
      for (k = 0; k >= -27; k = fn1(k, 6)) {
        p1 = fn2(o, p1);
        m_cache[k][l] = m[k][l];
      }
      p1 || m_cache[2][5];
    }
  }
}

int main() { return 0; }
