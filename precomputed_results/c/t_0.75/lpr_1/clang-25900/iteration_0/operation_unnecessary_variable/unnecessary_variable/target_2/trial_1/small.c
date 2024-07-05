typedef unsigned e;

// Function definition

unsigned int fn1(int p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

// Global variables

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

int main() {
  struct m ad = {1957};

  // Call to fn1 is removed since v is not used
  // ad.o = fn1(v, 5);

  signed ae;
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);

  // ad.o;
}
