struct h {
  int i;
  long j;
  int k;
};

int p_i;
long p_j;
int p_k;

static int fn1_i;
static long fn1_j;
static int fn1_k;

static void fn1(int p6_i, long p6_j, int p6_k, int* result_i, long* result_j, int* result_k) {
  *result_i = fn1_i;
  *result_j = fn1_j;
  *result_k = fn1_k;
}

unsigned int fn2() {
  int p_i;
  long p_j;
  int p_k;

  fn1(p_i, p_j, p_k, &p_i, &p_j, &p_k);

  for (;;) {
    int r_i;
    long r_j;
    int r_k;

    r_i = p_i;
    r_j = p_j;
    r_k = p_k;

    p_i = r_i;
    p_j = r_j;
    p_k = r_k;
  }
}

int main() {}
