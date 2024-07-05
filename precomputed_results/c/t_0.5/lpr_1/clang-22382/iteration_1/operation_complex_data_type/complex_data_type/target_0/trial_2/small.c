struct h {
  int i;
  long j;
  int k;
};

int fn1_k;

int fn2_p_i;
long fn2_p_j;
int fn2_p_k;

static int fn1();

unsigned int fn2(unsigned int p1) {
  int q;
  int fn1_return_value;
  int fn1_p_i;
  long fn1_p_j;
  int fn1_p_k;
  int fn2_r_i;
  long fn2_r_j;
  int fn2_r_k;

  fn1_return_value = fn1();
  fn1_p_i = fn1_i;
  fn1_p_j = fn1_j;
  fn1_p_k = fn1_k;

  for (;;) {
    fn2_r_i = fn2_p_i;
    fn2_r_j = fn2_p_j;
    fn2_r_k = fn2_p_k;
    fn2_p_i = fn2_r_i;
    fn2_p_j = fn2_r_j;
    fn2_p_k = fn2_r_k;
  }
}

int fn1() {
  int fn1_p1;
  int fn1_p5_i;
  long fn1_p5_j;
  int fn1_p5_k;

w:
  goto w;
}

int main() {}
