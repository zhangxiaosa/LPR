int r;
static signed s = -5L;

int main() {
  struct m {
    signed n : 18;
    signed o : 1;
  };
  struct m ad = {1957};
  ad.o = 5;
  r = t % (~s / ad.o);
}