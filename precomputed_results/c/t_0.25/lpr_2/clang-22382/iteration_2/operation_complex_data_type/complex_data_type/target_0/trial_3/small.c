struct h {
  int i;
  long j;
  int k;
};

static int fn1_i;
static long fn1_j;
static int fn1_k;

static int p5_i;

static void fn1(int p5_i) {
  int fn1_i = p5_i;

w:
  goto w;
}

unsigned int fn2() {
  int p_i;
  long p_j;
  int p_k;

  fn1(p_i);

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
