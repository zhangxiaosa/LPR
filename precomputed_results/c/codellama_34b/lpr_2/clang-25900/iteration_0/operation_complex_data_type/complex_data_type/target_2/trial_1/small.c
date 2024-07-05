
#include <stdio.h>

typedef unsigned g;

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
g t;
int u;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  return ad.o;
}

int main() { fn4_inlined(5); }

// Decompose the complex data type variables
int s_n = -5L;
int s_o = 1;

// Replace the complex data type variables with their decomposed counterparts
int main() { fn4_inlined(5); }

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s_n / ae);
  return ad.o;
}

// Replace the complex data type variables with their decomposed counterparts
int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s_n / ae);
  return ad.o;
}
