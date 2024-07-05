struct m {
  int n : 18;
  int o : 1;
};
int p;
unsigned q_l;
int r;
static int s = -5L;
unsigned t;
unsigned v;  // Remove this unused variable

int fn2(int p1, struct m p2, unsigned p3_l, unsigned p4_l, int p5) {
  struct m ad = {1957};
  ad.o = 5;  // Replace fn1(v, 5) with 5
  int ae;
  int af = t;  // Remove unused variable t
  ae = ad.o;
  ad.o = u;  // Remove unused variable u
  r = af % (~s / ae);  // Remove unused variable r
  // Remove ad.o; statement
}

int main() {
  fn2(p, q_l, q_l, q_l, q_l);  // Remove unused variable z
}