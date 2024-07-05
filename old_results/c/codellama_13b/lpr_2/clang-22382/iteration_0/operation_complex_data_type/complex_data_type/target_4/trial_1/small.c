
struct h {
  int i;
  long j;
  int k;
};

struct h_1 {
  int i;
  long j;
  int k;
};

int i_1;
long j_1;
int k_1;

unsigned l;

static struct h_1 fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h_1 p5) {
  p5.k;
w:;
  goto w;
}

unsigned fn2(unsigned p1) {
  struct h_1 p;
  unsigned q;
  fn1(q, l, p1, 3, p);
  while (1) {
    struct h_1 r;
    p = r = p;
  }
}

int main() {}
