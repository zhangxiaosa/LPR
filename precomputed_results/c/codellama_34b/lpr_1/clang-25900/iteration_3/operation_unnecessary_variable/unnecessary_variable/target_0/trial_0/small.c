
<SYS>

int fn1(p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5;
int u;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = u;
  r = ad.o % (~s / ae);
}

</SYS>

In this program, the variable `n` is not used anywhere, so it can be optimized out. The resulting program would be:
