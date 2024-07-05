
int i_val;
long j_val;
int k_val;

static struct h fn1(struct h p5) {
  p5.j;
  for (;;) {
    i_val = i_val + 1;
    j_val = j_val + 1;
    k_val = k_val + 1;
  }
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
