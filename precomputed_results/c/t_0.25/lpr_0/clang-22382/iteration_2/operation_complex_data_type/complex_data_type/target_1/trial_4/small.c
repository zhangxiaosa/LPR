struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  int p5_i = p5.i;
  long p5_j = p5.j;
  int p5_k = p5.k;
  
  w:
  goto w;
}

unsigned fn2() {
  struct h p;
  int p_i = p.i;
  long p_j = p.j;
  int p_k = p.k;
  
  fn1(p);
  
  for (;;) {
    struct h r1 = p;
    int r1_i = r1.i;
    long r1_j = r1.j;
    int r1_k = r1.k;
    
    p = r1;
    p_i = p.i;
    p_j = p.j;
    p_k = p.k;
  }
}

int main() {}