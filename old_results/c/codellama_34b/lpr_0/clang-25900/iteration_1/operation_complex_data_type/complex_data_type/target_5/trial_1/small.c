
#include <stdint.h>

int32_t g(int32_t p1, int32_t p2) { return p2; }

struct m {
  int32_t n : 18;
  int32_t o : 1;
};

int32_t r;
static int32_t s = -5L;
int32_t t;
int32_t v;

int main() {
  struct m ad = {1957};
  int32_t p1 = v;
  int32_t p2 = 5;
  ad.o = g(p1, p2);
  int32_t ae = ad.o;
  ad.o = 5;
  r = t % (~s / ae);
  ad.o;
}

// Decomposition of variables
int32_t n = 1957;
int32_t o = 5;
int32_t p1 = v;
int32_t p2 = 5;
int32_t ae = o;
int32_t t = 0;
int32_t s = -5L;
int32_t r = 0;

// Optimization of the program
int32_t optimized_r = t % (~s / ae);

// Final program
#include <stdint.h>

int32_t g(int32_t p1, int32_t p2) { return p2; }

struct m {
  int32_t n : 18;
  int32_t o : 1;
};

int32_t r;
static int32_t s = -5L;
int32_t t;
int32_t v;

int main() {
  struct m ad = {1957};
  int32_t p1 = v;
  int32_t p2 = 5;
  ad.o = g(p1, p2);
  int32_t ae = ad.o;
  ad.o = 5;
  r = optimized_r;
}
