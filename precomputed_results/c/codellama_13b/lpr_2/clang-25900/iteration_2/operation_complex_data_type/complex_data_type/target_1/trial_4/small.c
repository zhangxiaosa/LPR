
int r;
struct m {
  int n : 18;
  int o : 1;
};
int main() {
  struct m ad = {1957};
  int n = ad.n;
  int o = ad.o;
  r = n | (o << 18);
  ad.o = 5;
}
