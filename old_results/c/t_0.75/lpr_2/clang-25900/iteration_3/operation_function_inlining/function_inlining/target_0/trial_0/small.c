int r;
unsigned t;

struct m {
  int n : 18;
  int o : 1;
};

int main() {
  struct m ad = {1957};
  ad.o = 5;
  r = t % (5 / ad.o);
}