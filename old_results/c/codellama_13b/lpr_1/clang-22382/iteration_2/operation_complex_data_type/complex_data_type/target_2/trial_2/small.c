
// Decomposition of struct h into variables with primary data types

struct h {
  int i;
  int j;
  int k;
};

// Decomposition of struct h into variables with primary data types

int fn1(int p1, int p2, int p3, struct h p4) {
  int p4_i;
  int p4_j;
  int p4_k;
  p4_i = p4.i;
  p4_j = p4.j;
  p4_k = p4.k;
  goto w;
}

int fn2(int p1) {
  struct h p;
  struct h r;
  fn1(0, p1, p1, p);
  while (1) {
    p = r = p;
  }
}

int main() {
  // Your code here
  return 0;
}
