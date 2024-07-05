int r;
struct m {
  int n : 18;
  int o : 1;
};
int fn4() {
  struct m ad = {1957};
  ad.o = 5;
  ad.o = 0;
  r = 0;
}
int main() {
  fn4();
}