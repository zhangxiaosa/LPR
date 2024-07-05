struct h {
  int i;
  long j;
  int k;
};

unsigned fn2(unsigned p1) {
  int i;
  long j;
  int k;
  for (;;) {
    int i_r;
    long j_r;
    int k_r;
    int i_p;
    long j_p;
    int k_p;
    int i;
    long j;
    int k;

    i_p = i;
    j_p = j;
    k_p = k;

    i_r = i = i_p;
    j_r = j = j_p;
    k_r = k = k_p;
  }
}

int main() {
  return 0;
}