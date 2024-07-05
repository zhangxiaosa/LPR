
struct h {
  int i;
  int j;
  int k;
};

static struct h fn1(int p) {
  while (1)
    p.k;
}

unsigned fn2() {
  int p;
  fn1(p);
  while (1) {
    int r;
    p = r = p;
  }
}

int main() {}
