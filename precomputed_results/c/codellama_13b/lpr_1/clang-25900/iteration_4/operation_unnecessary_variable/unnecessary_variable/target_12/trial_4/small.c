
int fn1(p2) { return p2; }

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
  ad.o_prime_1 = fn1(5);
  int ae = ad.o_prime_1;
  ad.o_prime_1 = 0;
  r = -5 / ae;
  ad.o_prime_2;
}

int main() { fn3(); }
