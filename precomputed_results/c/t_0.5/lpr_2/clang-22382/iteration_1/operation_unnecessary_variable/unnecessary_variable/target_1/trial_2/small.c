struct h {
  int i;
  long j;
  int k;
};

static struct h fn1();

unsigned fn2() {
  struct h p;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

struct h fn1() {
w:
  goto w;
}

int main() {}
