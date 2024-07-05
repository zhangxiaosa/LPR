typedef struct {
  int i;
  long j;
  unsigned k;
} original_data_type;

static unsigned fn1(unsigned p1, unsigned k) {
  k;
w:
  goto w;
}

unsigned fn2() {
  int i;
  long j;
  unsigned k;
  unsigned p1 = 0;
  fn1(p1, k);
  while (1) {
    int i;
    long j;
    unsigned k;
    int r_i;
    long r_j;
    unsigned r_k;
    k = r_k = k;
    j = r_j = j;
    i = r_i = i;
  }
}

int main() {}
