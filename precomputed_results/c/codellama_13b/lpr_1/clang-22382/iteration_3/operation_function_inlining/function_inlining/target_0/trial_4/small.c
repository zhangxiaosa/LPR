c
struct h {
  long i;
  long j;
  long k;
};

void fn1(int p1, int p2, int p3, struct h *p4) {
  // function inlined
  p4->k;
  goto w;
}

int fn2(int p1) {
  struct h p;
  struct h r;
  fn1(0, p1, p1, &p);
  while (1) {
    p = r = p;
  }
}

int main() {}
