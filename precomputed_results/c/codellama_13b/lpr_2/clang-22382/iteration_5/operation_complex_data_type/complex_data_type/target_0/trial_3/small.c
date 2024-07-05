c
struct h {
  int j;
  int k;
};

int i;

struct h fn1(struct h p) {
  while (1)
    p.k;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {}
