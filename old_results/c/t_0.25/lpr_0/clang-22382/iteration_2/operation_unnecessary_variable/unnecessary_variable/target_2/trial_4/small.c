struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  // fn1(p); // Removed the function call to fn1
  for (;;) {
    struct h r1 = p;
    p = r1;
  }
}

int main() {}
