
#include <stdint.h>

int g(int p1, int p2) { return p2; }

int r;
int t;

int main() {
  int ad = 1957;
  int ae = g(5, 5);
  ad = ad % (17 / ae);
  ad;
}
