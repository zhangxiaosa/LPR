
#include <stdio.h>

int d;
int j_d;
int l_d;
int n;
int p;

struct c {
  int d : 18;
};

struct c i;
struct c j;
struct c l;

int main() {
  d = j.d;
  j_d = j.d;
  l_d = l.d;
  n = j_d && l_d;
  p = l_d | -(l_d && l_d) - n;
  i.d = p;
}
