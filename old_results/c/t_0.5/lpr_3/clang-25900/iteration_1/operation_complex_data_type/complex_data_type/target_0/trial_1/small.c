unsigned fn1(unsigned p1, int p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
unsigned t;

int main() {
  unsigned int ad_n = 1957;
  signed int ad_o = 0;

  ad_o = fn1(0, 5);

  signed int ae;
  ae = ad_o;

  ad_o = 0;

  r = t % (5 / ae);

  ad_o;
}