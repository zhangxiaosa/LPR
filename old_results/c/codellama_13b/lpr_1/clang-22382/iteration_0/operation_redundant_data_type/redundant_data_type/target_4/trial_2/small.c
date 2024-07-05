c
typedef struct {
  signed int i;
  long j;
  int k;
} h;

int l;

static h fn1(int p1, short p2, int p3, int p4, h p5) {
  p5.k;
w:;
  goto w;
}

int fn2(int p1) {
  h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    h r;
    p = r = p;
  }
}

int main() {}
