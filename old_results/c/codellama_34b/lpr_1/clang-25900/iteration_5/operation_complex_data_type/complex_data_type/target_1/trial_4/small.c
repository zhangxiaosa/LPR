
#include <stdio.h>

struct m {
  int o : 1;
};

int r;
static int s_sign = -5;
int s_unsigned = 5;
int main() {
  struct m ad = {1957};
  ad.o = s_unsigned;
  int ae = ad.o;
  r = ad.o % (-s_sign / ae);
}
