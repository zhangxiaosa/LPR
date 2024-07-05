typedef unsigned g;

unsigned fn1(unsigned p1, int p2) { return p2; }

struct m {
  signed int n : 18;
  signed int o : 1;
};

int r;
static signed int s = -5L;
unsigned t;
int u;
unsigned v;

int main() {
  struct m ad = {1957};
  ad.o = fn1(v, 5u);
  signed int ae;
  int af = static_cast<int>(t);
  ae = static_cast<signed int>(ad.o);
  ad.o = static_cast<signed int>(u);
  r = af % (~static_cast<signed int>(s) / ae);
}