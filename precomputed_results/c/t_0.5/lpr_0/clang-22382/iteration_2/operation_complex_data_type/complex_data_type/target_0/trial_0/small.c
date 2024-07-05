struct h {
  signed int i;
  long j;
  unsigned int k;
};

unsigned int fn2() {
  struct h p;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  return 0;
}