
struct h {
  long i;
  long j;
  long k;
};

struct h fn1(int p1, int p2, int p3, struct h p4) {
  p4.k;
w:;
  goto w;
}

int fn2(p1) {
  long p_i;
  long p_j;
  long p_k;
  long r_i;
  long r_j;
  long r_k;
  fn1(0, p1, p1, p_i, p_j, p_k);
  while (1)
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
}

int main() {
  long p_i;
  long p_j;
  long p_k;
  long r_i;
  long r_j;
  long r_k;
  fn2(p_i, p_j, p_k);
  return 0;
}
