unsigned p1;
int p2;

int r;
signed s = -5L;
unsigned t;
int u;

struct {
  signed n : 18;
  signed o : 1;
} ad = {1957};

signed ae;

unsigned fn1(unsigned p1, int p2) {
  return p2;
}

int main() {
  ad.o = fn1(5, 5);
  ae = ad.o;
  ad.o = u;
  r = t % (~s / ae);
  ad.o;
}