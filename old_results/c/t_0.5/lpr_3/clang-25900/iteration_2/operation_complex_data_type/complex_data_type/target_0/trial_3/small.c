unsigned fn1(unsigned p1, int p2) { return p2; }

int r;
unsigned t;

int main() {
  signed ad_n = 1957;
  signed ad_o = 0;

  ad_o = fn1(0, 5);

  signed ae;
  ae = ad_o;

  ad_o = 0;

  signed division_result = 5 / ae;
  r = t % division_result;
}