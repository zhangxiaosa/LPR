struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    int i, long int j, unsigned int k) {
  k;
w:;
  goto w;
}

unsigned fn2(int p1) {
  int i, j;
  unsigned int k;
  int q;
  fn1(q, l, p1, 3, i, j, k);
  for (;;) {
    int i, j;
    unsigned int k;
    i = j = i;
  }
}

int main() {}