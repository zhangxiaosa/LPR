int h_i;
long h_j;
int h_k;

static void fn1(int p5_i) {
w:
  goto w;
}

unsigned fn2() {
  int p5_i;
  long p5_j;
  int p5_k;
  int r_i;
  long r_j;
  int r_k;
  fn1(p5_i);
  for (;;)
    p5_i = r_i = p5_i;
}

int main() {}
