
struct h {
  int i;
  long j;
  int k;
};

int fn1(struct h p4) {
  while (1)
    p4 = p4;
}

int fn2() {
  int p_i;
  long p_j;
  int p_k;
  int r_i;
  long r_j;
  int r_k;
  fn1(p_i, p_j, p_k);
  while (1)
    p_i = r_i = p_i, p_j = r_j = p_j, p_k = r_k = p_k;
}

int main() {}
