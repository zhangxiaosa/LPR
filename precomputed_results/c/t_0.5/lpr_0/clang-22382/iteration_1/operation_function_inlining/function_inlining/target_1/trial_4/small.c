struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

unsigned fn2() {
  struct h p;
  int q;
  
  // Inlined body of fn1
  p.k;
  
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
