
#include <stdio.h>

struct c {
  int d : 18;
  int e;
};

struct c i, j;

int main() {
  j.d = j.e;
  int n = j.d && j.d;
  i.d = j.d | -(j.d && j.d) - n;
}
