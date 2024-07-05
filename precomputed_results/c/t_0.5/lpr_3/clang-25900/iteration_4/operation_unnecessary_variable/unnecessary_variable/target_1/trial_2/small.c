int fn1(p2) {
  return p2;
}

int r;

int main() {
  struct {
    int n : 18;
    int o : 1;
  } ad = {1957};

  ad.o = fn1(5);
  int ae = ad.o;
  ad.o = 0;
  
  if (ae != 0) {
    r = 0; // Division by zero error handling
  } else {
    r = 0 % (5 / ae);
  }
}