struct h {
  int i;
  long j;
  int k;
};

static int fn1_i;
static long fn1_j;
static int fn1_k;

static int fn2_i;
static long fn2_j;
static int fn2_k;

static int fn1();
unsigned int fn2() {
  int p_i = fn2_i;
  long p_j = fn2_j;
  int p_k = fn2_k;
  fn1();
  for (;;) {
    int r_i = p_i;
    long r_j = p_j;
    int r_k = p_k;
    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

int fn1() {
  int p5_i = fn1_i;
w:
  goto w;
}

int main() {}