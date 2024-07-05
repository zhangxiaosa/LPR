
struct h {
  int i;
  long j;
  int k;
};

struct h fn1(struct h p4) {
  for (int i = 0; i < 100; i++) {
    p4 = p4;
  }
}

int fn2() {
  struct h p;
  struct h r;
  fn1(p);
  for (int i = 0; i < 100; i++) {
    p = r = p;
  }
}

int main() {}
