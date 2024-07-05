int r;
unsigned t;

int main() {
  struct {
    signed n : 18;
    signed o : 1;
  } ad = {1957};

  ad.o = 5;
  signed ae;
  ae = ad.o;
  ad.o = 0;
  r = t % (5 / ae);
  ad.o;
}