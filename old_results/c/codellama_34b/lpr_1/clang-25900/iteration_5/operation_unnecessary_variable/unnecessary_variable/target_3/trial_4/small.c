
struct m {
  int n : 18;
};
int r;
int main() {
  struct m ad = {1957};
  ad.n = -5;
  r = ad.n % -5;
}
