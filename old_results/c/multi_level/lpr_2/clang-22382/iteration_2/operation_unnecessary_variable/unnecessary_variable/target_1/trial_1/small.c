struct h {
  int i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(struct h p5) {
w:
  goto w;
}

unsigned fn2() {
  struct h p;
  for (;;) {
    struct h r1;
    // p = r1 = p;  <-- Commented out since p5 is not used
  }
}

int main() {}
