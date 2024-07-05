struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  int p5_i = p5.i;
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
    struct h r;
    int r_i = r.i;
    long r_j = r.j;
    int r_k = r.k;
    
    p = r = p;
  }
}

int main() {}