struct H {
  short i;
  long j;
  unsigned k;
};

static struct H fn1(struct H p5) {
  unsigned int p5_k = p5.k;
w:
  goto w;
}

unsigned int fn2() {
  struct H p;
  unsigned int p_k;
  p_k = p.k;
  for (;;) {
    struct H r;
    unsigned int r_k;
    r_k = r.k;
    p = r = p;
  }
}

int main() {}
