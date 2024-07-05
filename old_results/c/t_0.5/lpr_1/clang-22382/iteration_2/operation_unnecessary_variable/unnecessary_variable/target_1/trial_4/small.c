struct h {
  int i;
  long j;
  int k;
};

static int fn1_k();

unsigned fn2() {
  struct h p;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int fn1_k() {
  while (1) {}
}

int main() {}
