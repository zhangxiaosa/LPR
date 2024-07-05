struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  for (;;) {
    struct h r;
    p = r = p;
    p.k;
  }
}

int main() {}
