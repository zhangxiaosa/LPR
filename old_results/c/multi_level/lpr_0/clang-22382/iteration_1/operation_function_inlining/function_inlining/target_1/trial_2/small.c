struct original_data_type {
  int i;
  long j;
  unsigned k;
};

unsigned fn2() {
  struct original_data_type p;
  
  // Inlining fn1 code
  unsigned p1 = 0;
  short p2 = 0;
  
w:
  goto w;
  
  for (;;) {
    struct original_data_type r;
    p = r = p;
  }
}

int main() {}
