struct h {
  int i;
  long j;
};

static void fn1(struct h *p5) {
  // No need for this function, removed.
}

unsigned fn2() {
  struct h p;
  for (;;) {
    struct h r;
    p = r;
  }
}

int main() {
  return 0;
}