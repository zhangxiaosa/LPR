struct h {
  signed i;
  long j;
  unsigned k;
};

static unsigned fn1_k(struct h p5) {
  for (;;) {
    p5.k;
  }
  return p5.k;
}

unsigned fn2() {
  struct h p;
  unsigned p_k;
  
  fn1_k(p);
  
  for (;;) {
    struct h r;
    unsigned r_k;
    
    p = r = p;
  }
  
  return p_k;
}

int main() {}
