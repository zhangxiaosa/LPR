int r;
static int s = -5L;

int main() {
  struct m {
    int n : 18;
    int o : 1;
  };
  struct m ad = {1957};
  ad.o = 5;
  r = 0;
}