
struct h {
  int i;
  long j;
  int k;
};

unsigned l;

int i_1;
long j_1;
int k_1;

static struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4,
                    struct h p5) {
  p5.k;
  while (1) {
    struct h r;
    p5 = r;
  }
}

unsigned fn2(unsigned p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  while (1) {
    struct h r;
    p = r;
  }
}

int main() {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  while (1) {
    struct h r;
    p = r;
  }
}
