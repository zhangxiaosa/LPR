
struct int {
  int i;
  int j;
  int k;
};

struct int fn1(struct int p) {
  while (1)
    p.k;
}

unsigned fn2() {
  struct int p;
  fn1(p);
  while (1) {
    struct int r;
    p = r = p;
  }
}

int main() {}
