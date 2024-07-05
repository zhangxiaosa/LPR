#include <iostream>

int fn1(int p2);

int r;
unsigned t;

int main() {
  struct {
    signed n : 18;
    signed o : 1;
  } ad = {1957};

  ad.o = (int)5;

  signed ae;
  ae = ad.o;

  ad.o = 0;

  r = t % (5 / ae);
}
