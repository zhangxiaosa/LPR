#include <stdio.h>

int r;
int ae;

int main() {
  struct {
    int n : 18;
    int o : 1;
  } p2 = {1957};
  p2.o = 5;
  ae = p2.o;
  r = r % (4 / ae);
}
