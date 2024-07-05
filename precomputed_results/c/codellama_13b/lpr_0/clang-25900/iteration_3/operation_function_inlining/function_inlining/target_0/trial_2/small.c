
struct m {
  int n : 18;
  int o : 1;
};

unsigned r;
unsigned t;
int u;

int main() {
  struct m ad = {1957};
  ad.o = 5;
  u = ad.o;
  ad.o = u;
  r = t % (5 / u);
  ad.o;
}
