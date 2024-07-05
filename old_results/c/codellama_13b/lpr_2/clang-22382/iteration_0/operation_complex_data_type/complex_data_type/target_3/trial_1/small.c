
struct h {
  int i;
  long j;
  int k;
};
unsigned l;

int fn1_p1;
short fn1_p2;
unsigned fn1_p3;
unsigned fn1_p4;
struct h fn1_p5;

unsigned fn2_p1;
int fn2_q;
struct h fn2_p;

int main() {}

unsigned fn2() {
  struct h r;
  fn1(fn2_q, l, fn2_p1, 3, fn2_p);
  while (1) {
    fn2_p = r = fn2_p;
  }
}

unsigned fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
w:;
  goto w;
}
