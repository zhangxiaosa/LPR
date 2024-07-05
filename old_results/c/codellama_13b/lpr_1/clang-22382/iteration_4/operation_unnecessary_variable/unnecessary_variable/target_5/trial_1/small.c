
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p4) {
  while (1)
    p4 = p4;
}

int fn2() {
  struct h r;
  while (1)
    r = r;
}

int main() {
  // No optimizations made
}
