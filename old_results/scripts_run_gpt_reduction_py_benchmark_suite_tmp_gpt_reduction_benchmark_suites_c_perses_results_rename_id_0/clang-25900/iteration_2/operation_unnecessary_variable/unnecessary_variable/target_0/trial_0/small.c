#include <iostream>

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
unsigned t;

int main() {
  struct m ad = {1957};
  
  ad.o = 5;
  
  int ae = ad.o;
  
  ad.o = 0;
  
  r = t % (4 / ae);
  
  // Removed unused access to ad.o
  
  return 0;
}
