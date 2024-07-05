
#include <stdio.h>

struct c {
  int d : 18;
};

struct c i;
struct c j;

int main() {
  struct c l;
  int j_d = j.d;
  int l_d = l.d;
  int n = j_d && l_d;
  int p = l_d | -(l_d && l_d) - n;
  i.d = p;
}

