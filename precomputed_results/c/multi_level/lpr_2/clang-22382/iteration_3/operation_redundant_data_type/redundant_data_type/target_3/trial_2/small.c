static int i_fn1(int i_p5, long j_p5, unsigned k_p5) {
  k_p5;
w:
  goto w;
}

unsigned fn2() {
  int i_p, i_r1;
  long j_p, j_r1;
  unsigned k_p, k_r1;
  
  i_fn1(i_p, j_p, k_p);
  for (;;) {
    i_p = i_r1 = i_p;
    j_p = j_r1 = j_p;
    k_p = k_r1 = k_p;
  }
}

int main() {}
