
<SYS>

#include <stdio.h>
#include <stdlib.h>

struct c {
  int d : 18;
  int e;
  int g;
  int h;
};

struct c i;

int main() {
  struct c l;
  int m = i.e;
  l.d = m;
  int temp = i.h && l.d;
  int n = temp;
  int p = l.d | -(l.d && l.d) - n;
  i.g = p;
  return 0;
}

</SYS>
