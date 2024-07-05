struct h {
  int i;
  long j;
  int k;
};

int fn1_i;
long fn1_j;
int fn1_k;

unsigned fn2(unsigned p1) {
  int p_i;
  long p_j;
  int p_k;
  int q;
  fn1_i;
  fn1_j;
  fn1_k;
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
