
int n = 18;
int o = 1;
int p1;
static int s = -5L;

int fn4_inlined(p1) {
  int ae;
  ae = o;
  o = 0;
  r = ae % (~s / ae);
  return o;
}

int main() {
  fn4_inlined(5);
}
