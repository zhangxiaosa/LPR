
int e;
int a;
int b;
int c;
long d;

int fn1(int p1, int p2) { return p2; }

struct k {
  int l;
};

struct m {
  int n : 18;
  int o : 1;
};

int p;
struct k q;
int r;
static int s = -5;
unsigned t;
int u;
unsigned v;

int fn2(int p1, struct m p2, struct k p3, struct k p4, int p5) { fn3(p5); }

int fn3(unsigned p1) {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  int ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}

int main() { fn4(); }
