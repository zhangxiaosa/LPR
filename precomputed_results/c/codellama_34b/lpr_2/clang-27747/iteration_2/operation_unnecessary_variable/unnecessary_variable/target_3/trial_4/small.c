
#include <stdio.h>

struct c {
  int d : 18;
};

int main() {
  struct c i;
  struct c j;
  int n = j.d && j.d;
  int p = j.d || !n;
  i.d = p;
}
