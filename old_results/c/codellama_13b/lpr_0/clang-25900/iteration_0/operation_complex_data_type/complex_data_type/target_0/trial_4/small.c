
struct k {
  int l;
};

struct m {
  int n : 18;
  int o : 1;
};

int main() {
  struct k q;
  int p1 = -5L;
  unsigned p2 = 5;
  struct m z;
  z.o = fn1(p2, p1);
  fn2(p1, z, q, q, q.l);
}

int fn2(int p1, struct m p2, struct k p3, struct k p4, int p5) {
  fn3(p5);
}

int fn3(unsigned p1) {
  struct m ad = {1957};
  ad.o = fn1(p1, 5);
  int ae;
  int af = p1;
  ae = ad.o;
  ad.o = p1;
  p1 % (~p1 / ae);
  ad.o;
}

int fn1(int p1, int p2) {
  return p2;
}
