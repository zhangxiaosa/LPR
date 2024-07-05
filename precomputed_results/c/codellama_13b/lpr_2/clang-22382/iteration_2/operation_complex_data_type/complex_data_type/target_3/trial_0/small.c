
struct h {
  int i;
  long j;
  int k;
};

struct h p;

unsigned fn2(unsigned p1) {
  int i = p.i;
  long j = p.j;
  int k = p.k;
  fn1(3, 3, i, j, k);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
