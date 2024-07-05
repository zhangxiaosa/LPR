int r;
static signed s = -5L;
unsigned t;

int main() {
  struct m {
    signed n : 18;
    signed o : 1;
  };
  struct m ad = {1957};
  ad.o = 5;
  signed ae;
  ae = ad.o;
  ad.o = 5;
  r = t % (~s / ae);
  ad.o;
}