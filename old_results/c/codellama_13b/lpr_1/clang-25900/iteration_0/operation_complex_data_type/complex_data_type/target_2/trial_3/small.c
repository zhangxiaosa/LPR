
int fn1(int p1, int p2) { return p2; }

struct k {
  unsigned l;
};

struct m {
  signed n : 18;
  signed o : 1;
};

struct k q;
int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

int fn3(int p1) {
  struct m ad = {1957};
  int af = p1;
  signed ae = ad.o;
  r = af % (~s / ae);
}

int main() { fn3(q.l); }
