
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s_sign = -5;
int s_unsigned = 5;
int u;
int main() {
  struct m ad = {1957};
  ad.o = s_unsigned;
  int ae = ad.o;
  ad.o = u;
  r = ad.o % (~s_sign / ae);
}

// Constant propagation:
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s_sign = -5;
int s_unsigned = 5;
int u;
int main() {
  struct m ad = {1957};
  ad.o = 5; // Constant propagation
  int ae = ad.o;
  ad.o = u;
  r = ad.o % (~s_sign / ae);
}

// Copy propagation:
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s_sign = -5;
int s_unsigned = 5;
int u;
int main() {
  struct m ad = {1957};
  ad.o = 5; // Copy propagation
  int ae = ad.o;
  ad.o = u;
  r = ae % (~s_sign / ae); // Copy propagation
}

// Optimized program:
struct m {
  int n : 18;
  int o : 1;
};
int r;
static int s_sign = -5;
int s_unsigned = 5;
int u;
int main() {
  struct m ad = {1957};
  ad.o = 5;
  int ae = ad.o;
  r = ae % (~s_sign / ae);
}
