
unsigned g(unsigned p1, int p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static int s = -5L;
unsigned t;
int u;
unsigned v;

int main() {
  struct m ad = {1957};
  ad.o = g(v, 5);
  int ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}

/* Decomposition of variables with primary data type */
int r;
int s = -5;
int t;
int u;
int v;
int ae;

// Decomposition of struct m
struct m {
  int n : 18;
  int o : 1;
};

// Decomposition of function g
unsigned g(unsigned p1, int p2) { return p2; }

// Decomposition of main function
int main() {
  struct m ad = {1957};
  ad.o = g(v, 5);
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}
