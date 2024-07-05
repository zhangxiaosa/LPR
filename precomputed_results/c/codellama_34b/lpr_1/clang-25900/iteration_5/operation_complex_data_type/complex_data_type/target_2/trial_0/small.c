
#include <stdio.h>
#include <stdlib.h>

// Decomposition of the struct m into variables with primary data types
int n = 18;
int o = 1;

// Other variables
int r;
int s_sign = -5;
int s_unsigned = 5;
int u;

int main() {
  // Initialization of the struct m
  struct m ad = {1957};
  ad.o = s_unsigned;
  int ae = ad.o;
  ad.o = u;
  r = ad.o % (~s_sign / ae);
  return 0;
}
