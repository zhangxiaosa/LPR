int fn1(p2) {
  return p2;
}

int main() {
  struct {
    int n : 18;
    int o : 1;
  } ad = {1957};
  
  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = 0;
  r = 0;
}