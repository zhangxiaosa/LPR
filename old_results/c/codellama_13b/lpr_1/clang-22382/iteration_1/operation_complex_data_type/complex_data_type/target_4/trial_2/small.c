
struct h {
  int i;
  long j;
  int k;
};

void fn1(int p1, int p2, int p3, int p4, struct h* p5) {
  p5->k;
  goto w;

w:
  return;
}

int fn2(int p1) {
  struct h p;
  int q;
  fn1(q, 0, p1, 3, &p);
  while (1) {
    struct h r;
    p = r;
  }
}

int main() {
  int x = fn2(1);
  return 0;
}
