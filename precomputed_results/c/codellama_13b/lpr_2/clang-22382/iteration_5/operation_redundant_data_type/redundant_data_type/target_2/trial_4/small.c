
#include <stdio.h>

struct h {
  long i;
  long j;
  long k;
};

static void fn1(long k) {
  while (1)
    k;
}

unsigned fn2() {
  long i;
  long j;
  long k;
  while (1) {
    i = j = k;
  }
}

int main() {}
