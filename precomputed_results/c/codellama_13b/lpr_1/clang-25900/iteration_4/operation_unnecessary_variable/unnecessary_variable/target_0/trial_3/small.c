
int fn1(void) { return 5; }
int r;
static int s = -5;
int t_high;
struct m {
  int n : 18;
  int o_prime_1 : 1;
  int o_prime_2 : 1;
};
int fn3() {
  struct m ad = {1957};
  ad.o_prime_1 = fn1();
  r = t_high % (~s / ad.o_prime_1);
}
int main() { fn3(); }
