#include <stdio.h>

int r;
unsigned t;

int main() {
  struct {
    signed n : 18;
    signed o : 1;
  } ad = {1957};

  ad.o = 5;

  signed ae;
  ae = 5;

  ad.o = 0;

  r = 0;

  return 0;
}