
struct h {
  int i;
  long j;
  int k;
};

struct h_i {
  int i;
};

struct h_j {
  long j;
};

struct h_k {
  int k;
};

struct h fn1(int p1, int p2, int p3, int p4, struct h_i p5_i, struct h_j p5_j, struct h_k p5_k) {
  p5_k;
w:;
  goto w;
}

int fn2(int p1) {
  struct h_i p_i;
  int q;
  struct h_j p_j;
  struct h_k p_k;
  struct h_i r_i;
  struct h_j r_j;
  struct h_k r_k;
  fn1(q, 0, p1, 3, p_i, p_j, p_k);
  while (1) {
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {}
