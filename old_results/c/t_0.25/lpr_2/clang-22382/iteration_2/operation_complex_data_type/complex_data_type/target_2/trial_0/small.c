struct h {
  int i;
  long j;
  int k;
};

static int fn1(int p5_i) {
w:
  goto w;
}

unsigned int fn2() {
  int p_i;
  long p_j;
  int p_k;
  
  int r_i;
  long r_j;
  int r_k;
  
  int p5_i = p_i;
  
  fn1(p5_i);
  
  for (;;) {
    r_i = p_i;
    r_j = p_j;
    r_k = p_k;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

int main() {}
