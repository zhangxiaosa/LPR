struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct h p;
  
  // Inlined body of fn1
  for (;;) {
    p.k;
  }
  
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
