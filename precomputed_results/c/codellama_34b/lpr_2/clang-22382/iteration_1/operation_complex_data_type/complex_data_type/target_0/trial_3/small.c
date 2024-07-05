
int i;
long j;
int k;
int l;

int fn1(int p1, short p2, int p3, int p4, struct h p5) {
  p5.k = p3;
  p5.j = p4;
  return p5.i;
}

int fn2(p1) {
  struct h p;
  fn1(p1, l, p1, 3, p);
  return p.i;
}

int main() {}
