
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s = -5L;
int fn4_inlined(p1) {
  int r_tmp = p1 % (~s / p1);
  r = r_tmp;
  return 0;
}
int main() { fn4_inlined(5); }
