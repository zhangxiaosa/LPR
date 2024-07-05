
struct h {
  int i;
  int j;
  int k;
};

static struct h fn1(int p1, int p2, int p3, struct h p4) {
  while (1)
    p4 = p4;
}

int fn2(p1) {
  struct h p;
  struct h r;
  fn1(0, p1, p1, p);
  while (1)
    p = r = p;
}

int main() {}
