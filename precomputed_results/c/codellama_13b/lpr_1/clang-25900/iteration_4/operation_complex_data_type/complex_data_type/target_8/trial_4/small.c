
// Variables with primary data types
int t_high; // int
int t_low; // int
int r; // int
int s; // int
int n; // int
int o_prime_1; // int
int o_prime_2; // int

// Complex data types
struct m {
  int n : 18;
  int o_prime_1 : 1;
  int o_prime_2 : 1;
};

// Functions
int fn1(p2) { return p2; } // int
int fn3() {
  struct m ad = {1957};
  ad.o_prime_1 = fn1(5);
  int ae = ad.o_prime_1;
  ad.o_prime_1 = 0;
  r = t_high % (~s / ae);
  ad.o_prime_2;
} // int

int main() { fn3(); } // int
