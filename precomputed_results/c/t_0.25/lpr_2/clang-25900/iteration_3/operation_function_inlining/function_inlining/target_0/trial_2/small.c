int r;
static int s = -5L;
int t;

int main() {
  struct m {
    int n : 18;
    int o : 1;
  };
  struct m ad = {1957};
  ad.o = 5;
  ad.o = 0;
  r = t % (~s / ad.o);
  0;
}