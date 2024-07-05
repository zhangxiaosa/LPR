
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s = -5L;

int fn4_inlined(p1) {
  int ae = 1957;
  int r_tmp = ae % (~s / ae);
  r = r_tmp;
  return ae;
}

int main() { fn4_inlined(5); }
