
struct m fn1(struct m p1, int p2) { return p2; }

struct m {
  int n : 18;
  int o : 1;
};

int r;
static struct m s = {.o = -5};
unsigned t;
int u;

int main() {
  struct m ad = {.n = 1957};
  ad.o = fn1(t, 5);
  struct m ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}
