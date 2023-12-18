struct m {
  signed n : 18;
  signed o : 1;
};
int r;
static signed s = -5L;
unsigned t;
unsigned v;
int main() {
  struct m ad = {1957};
  ad.o = 5;  // Optimized assignment
  int ae = ad.o;
  r = t % (~s / ae);
  // The assignment `ad.o = 0;` is optimized out
}