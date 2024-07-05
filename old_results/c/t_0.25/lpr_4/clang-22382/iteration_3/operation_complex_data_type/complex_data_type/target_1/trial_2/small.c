struct h {
  int i;
  long j;
  int k;
};

unsigned int fn2() {
  struct h p;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
