#include <stdio.h>

int r;

int main() {
  struct {
    signed n : 18;
    signed o : 1;
  } ad = {1957};
  ad.o = 5;
  signed ae;
  ae = 5;
  r = r % (5 / ae);
}
