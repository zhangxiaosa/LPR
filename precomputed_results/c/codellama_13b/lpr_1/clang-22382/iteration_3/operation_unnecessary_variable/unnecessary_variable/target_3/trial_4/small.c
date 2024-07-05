
struct h {
  int i;
  long j;
  char k;
};

static struct h fn1(int p1, int p2, int p3, struct h p4) {
  while (1)
    p4 = p4;
}

int fn2(p1) {
  fn1(0, p1, p1, {});
}

int main() {}
