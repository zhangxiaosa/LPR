struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p6) {
  // Empty body
}

unsigned fn2() {
  struct h p;
  for (;;) {
    p = p;
  }
}

int main() {}
