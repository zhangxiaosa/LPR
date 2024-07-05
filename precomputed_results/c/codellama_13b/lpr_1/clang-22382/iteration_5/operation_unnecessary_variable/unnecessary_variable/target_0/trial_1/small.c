
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p4) {
  return p4;
}

int fn2() {
  struct h r;
  while (1)
    r = r;
}

int main() {}
