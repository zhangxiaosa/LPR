typedef struct {
  int i;
  long j;
  unsigned k;
} original_data_type;

static unsigned fn1(unsigned p1, unsigned p_i, long p_j, unsigned p_k) {
  p_k;
w:
  goto w;
}

unsigned fn2() {
  unsigned p_i;
  long p_j;
  unsigned p_k;
  fn1(0, p_i, p_j, p_k);
  while (1) {
    unsigned r_i;
    long r_j;
    unsigned r_k;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

int main() {}
