
#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
int u;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  ae = ad.o;
  ad.o = u;
  r = ae % (~s / ae);
  return ad.o;
}

int main() { fn4_inlined(5); }

// Optimized program

#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
int u;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  ae = ad.o;
  ad.o = u;
  r = ae % (~s / ae);
  return ad.o;
}

int main() { fn4_inlined(5); }

// Constant propagation and copy propagation optimization

#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int r;
static int s = -5L;
int u;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  ae = ad.o;
  ad.o = u;
  r = ae % (~s / ae);
  return ad.o;
}

int main() { fn4_inlined(5); }

// Unused variable optimization

#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int r;
int u;

int fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  int ae;
  ae = ad.o;
  ad.o = u;
  r = ae % (~s / ae);
  return ad.o;
}

int main() { fn4_inlined(5); }
