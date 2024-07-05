#include <stdio.h>

typedef long long_type;
typedef unsigned unsigned_type;

struct h {
  int i;
  long_type j;
  unsigned_type k;
};

unsigned_type l;

unsigned_type fn2(unsigned_type p1, struct h p5) {
    p5.k;

w:
    goto w;
}

int main() {
    // program body
    return 0;
}