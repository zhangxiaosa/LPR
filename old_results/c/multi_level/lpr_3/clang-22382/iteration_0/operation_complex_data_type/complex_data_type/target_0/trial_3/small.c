# Variable declarations

signed int h_i;
long h_j;
unsigned int h_k;
unsigned int l;

# Function declarations

static void fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4, signed int *k);

void fn2(int p1) {
  signed int p_i;
  long p_j;
  unsigned int p_k;
  int q;

  fn1(q, l, p1, 3, &p_k);
  for (;;) {
    signed int r_i;
    long r_j;
    unsigned int r_k;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

void fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4, signed int *k) {
w:
  goto w;
}

int main() {
  return 0;
}