
struct h {
  int i;
  long j;
  int k;
};

struct h fn1(struct h p) {
  while (1)
    p.k;
}

unsigned fn2() {
  struct h p;
  struct h r;
  while (1) {
    p = r = p;
  }
}

int main() {
  struct h p;
  fn2();
}
