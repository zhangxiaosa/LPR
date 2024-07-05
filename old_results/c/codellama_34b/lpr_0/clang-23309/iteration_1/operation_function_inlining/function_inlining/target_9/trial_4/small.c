
#include <stdio.h>

typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

int calculate_sum(int p1, int p2) { return p1 + p2; }
long calculate_product(long p1, long p2) { return p1 * p2; }
d calculate_difference(d p1, d p2) { return p1 - p2; }
f calculate_quotient(f p1, f p2) { return p1 / p2; }
f p;
void calculate_checksum(g p1, char *p2, int p3) { p = p1; }
unsigned v;
short w = 3;
short ac = 1L;
d calculate_sum_of_squares(g, e);
d calculate_product_of_squares(d, f, int, e);
short calculate_difference_of_squares(int, int, d, short);

int main() {
  int sum = calculate_sum(248UL, 248UL);
  int product = calculate_product(sum, sum);
  int difference = calculate_difference(product, 250UL);
  int quotient = calculate_quotient(difference, 250UL);
  calculate_checksum(quotient, "checksum", 0);
  printf("checksum = %X\n", p);
  return 0;
}

// Inlined version of calculate_sum
short calculate_sum_of_squares(g p1, e p2) {
  int an;
  while (w) {
    if (an = 250UL) {
      p2 = calculate_sum(248UL, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (calculate_difference(calculate_product(ao, ao), p2) & 1UL)
        v = 1UL;
    }
    w--;
  }
  return 0;
}

// Inlined version of calculate_product
short calculate_product_of_squares(d p1, f p2, int p3, e p4) {
  int an;
  while (w) {
    if (an = 250UL) {
      p2 = calculate_product(248UL, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (calculate_difference(calculate_product(ao, ao), p2) & 1UL)
        v = 1UL;
    }
    w--;
  }
  return 0;
}

// Inlined version of calculate_difference
short calculate_difference_of_squares(int p1, int p2, d p3, short p4) {
  int an;
  while (w) {
    if (an = 250UL) {
      p2 = calculate_difference(248UL, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (calculate_difference(calculate_product(ao, ao), p2) & 1UL)
        v = 1UL;
    }
    w--;
  }
  return 0;
}
