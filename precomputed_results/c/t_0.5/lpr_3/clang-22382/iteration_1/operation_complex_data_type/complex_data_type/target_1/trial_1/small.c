struct h {
  signed i;
  long j;
  unsigned k;
};

static struct h fn1(signed p5_i, long p5_j, unsigned p5_k) {
  for (;;) {
    p5_k;
  }
}

unsigned fn2() {
  signed p_i;
  long p_j;
  unsigned p_k;
  
  struct h p;
  p.i = p_i;
  p.j = p_j;
  p.k = p_k;
  
  fn1(p.i, p.j, p.k);
  
  for (;;) {
    struct h r;
    signed r_i;
    long r_j;
    unsigned r_k;
    
    r.i = r_i;
    r.j = r_j;
    r.k = r_k;
    
    p = r = p;
  }
}

int main() {}
