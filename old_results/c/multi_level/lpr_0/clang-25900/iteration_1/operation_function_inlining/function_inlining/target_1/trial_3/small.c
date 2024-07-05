int r;
static int s = -5L;
unsigned t;
int u;
struct m {
  int n : 18;
  int o : 1;
};

int fn4() {
  struct m ad = {1957};
  ad.o = 5;
  r = t % (~s / ad.o);
}

int main() {
  fn4();
}
