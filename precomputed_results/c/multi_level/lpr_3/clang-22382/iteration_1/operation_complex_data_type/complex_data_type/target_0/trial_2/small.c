struct h {
  int i;
  long j;
  unsigned k;
};

int fn1(int p5_i, long p5_j, unsigned p5_k) {
  unsigned p5_k_local = p5_k;
 w:
  goto w;
}

int fn2() {
  int p_i;
  long p_j;
  unsigned p_k;

  int return_val = fn1(p_i, p_j, p_k);

  for (;;) {
    int r_i;
    long r_j;
    unsigned r_k;
    
    int p_temp_i = r_i;
    long p_temp_j = r_j;
    unsigned p_temp_k = r_k;
    
    int p_i = p_temp_i;
    long p_j = p_temp_j;
    unsigned p_k = p_temp_k;
  }
}

int main() {}
