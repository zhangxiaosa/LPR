
struct m {
  int n;
  int o_prime_1;
  int o_prime_2;
};

int fn1(int p1, int p2) { return p2; }

int r;
static int s = -5L;
int t = 0;

int fn3() {
  struct m ad = {1957, 5, 5};
  int ae = ad.o_prime_1;
  ad.o_prime_1 = 0;
  r = t % (~s / ae);
  ad.o_prime_2 = ad.o_prime_1;
}

int main() { fn3(); }
