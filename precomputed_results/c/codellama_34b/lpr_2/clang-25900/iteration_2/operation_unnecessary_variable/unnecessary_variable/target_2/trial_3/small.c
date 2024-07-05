
struct m {
  int n;
  int o;
};

int r;
static int s = -5L;

int fn4_inlined(p1) {
  int ae = p1;
  ae = 0;
  int r_tmp = ae % (~s / ae);
  r = r_tmp;
  return ae;
}

int main() {
  fn4_inlined(5);
}
