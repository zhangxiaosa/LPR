struct h {
  int i;
  long j;
  int k;
};

static long optimizeTarget(unsigned p1, short p2, unsigned p3, unsigned p4, int p5_i, long p5_j, int p5_k) {
  p5_k;
w:
  goto w;
}

unsigned fn2(unsigned p1) {
  int p_i;
  long p_j;
  int p_k;
  
  optimizeTarget(0, 0, p1, 3, p_i, p_j, p_k);
  
  for (;;) {
    int r_i;
    long r_j;
    int r_k;
    
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {}
