
int i;
long j;
int k;
int l;

int p1;
short p2;
int p3;
int p4;
struct h p5;

int fn1(int p1, short p2, int p3, int p4, struct h p5) {
  p5.k;
  goto w;
}

int fn2(int p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  i = 0;
  j = 0;
  k = 0;
  l = 0;

  p1 = 0;
  p2 = 0;
  p3 = 0;
  p4 = 0;
  p5 = 0;

  fn1(p1, p2, p3, p4, p5);
  fn2(p1);
}
