#include <stdio.h>

typedef int b;

struct c {
  unsigned e;
};

struct c j;

int main() {
  b m = j.e;
  j.e = m;
}