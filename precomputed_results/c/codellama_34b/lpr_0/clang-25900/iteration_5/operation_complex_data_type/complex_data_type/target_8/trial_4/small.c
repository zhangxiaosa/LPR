
struct m {
  int n : 18;
  int o : 1;
};

int r;
int t = 17;

int main() {
  struct m ad = {1957};
  ad.o = 5;
  r = t % ad.o;
}
