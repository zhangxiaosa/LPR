
#include <stdio.h>

int g(int p1, int p2) { return p2; }

int main() {
  int p1 = 5;
  int p2 = 5;
  int ad = g(p1, p2);
  int ae = ad % (17 / ad);
  int r = ae;
}
