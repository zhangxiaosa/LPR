struct h {
  int i;
  long j;
  int k;
};

static struct h fn1() {
  while (1) {
  }
}

unsigned fn2() {
  struct h p;
  int q;
  while (1) {
    struct h r;
    // No need to call fn1 and assign values to p and r
  }
}

int main() {
}