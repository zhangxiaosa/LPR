#include <stdio.h>

int fn1(int p1, int p2) {
  return p2;
}

int r;
static int s = -5L;
int t;

int main() {
  struct m {
    int n : 18;
    int o : 1;
  };

  struct m ad = {1957};
  ad.o = fn1(5, 5);

  int ae = ad.o; // Optimization: Initialize ae with ad.o
  r = t % (~s / ad.o); // Optimization: Replace ae with ad.o

  ad.o; // Removed unused statement

  return 0;
}