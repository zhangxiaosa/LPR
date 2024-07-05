unsigned fn1(p2) { return p2; }
struct m {
  int n : 18;
  int o : 1;
};
int r;
static signed s = -5L;
unsigned t;
int main() {
  // Constant propagation
  struct m ad = {1957};
  
  // Copy propagation
  ad.o = fn1(5);
  signed ae;
  ae = ad.o;
  
  // Unused variable elimination
  // ad.o = 0;  // Commented out
  
  // Simplify expression
  r = t % (-5 / ae);
  ad.o;
}