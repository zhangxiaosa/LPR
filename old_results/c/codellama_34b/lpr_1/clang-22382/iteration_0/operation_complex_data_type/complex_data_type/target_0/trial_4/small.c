
#include <stdio.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

int main() {
  long l;
  struct h p1, p2, p3, p4, p5;
  int q;

  // Initialize the struct variables
  p1.i = 1;
  p1.j = 2;
  p1.k = 3;

  p2.i = 4;
  p2.j = 5;
  p2.k = 6;

  p3.i = 7;
  p3.j = 8;
  p3.k = 9;

  p4.i = 10;
  p4.j = 11;
  p4.k = 12;

  p5.i = 13;
  p5.j = 14;
  p5.k = 15;

  // Print the struct variables
  printf("p1: i = %d, j = %ld, k = %u\n", p1.i, p1.j, p1.k);
  printf("p2: i = %d, j = %ld, k = %u\n", p2.i, p2.j, p2.k);
  printf("p3: i = %d, j = %ld, k = %u\n", p3.i, p3.j, p3.k);
  printf("p4: i = %d, j = %ld, k = %u\n", p4.i, p4.j, p4.k);
  printf("p5: i = %d, j = %ld, k = %u\n", p5.i, p5.j, p5.k);

  // Decompose the struct variables
  int i1 = p1.i;
  int j1 = p1.j;
  int k1 = p1.k;

  int i2 = p2.i;
  int j2 = p2.j;
  int k2 = p2.k;

  int i3 = p3.i;
  int j3 = p3.j;
  int k3 = p3.k;

  int i4 = p4.i;
  int j4 = p4.j;
  int k4 = p4.k;

  int i5 = p5.i;
  int j5 = p5.j;
  int k5 = p5.k;

  // Print the decomposed variables
  printf("i1 = %d, j1 = %ld, k1 = %u\n", i1, j1, k1);
  printf("i2 = %d, j2 = %ld, k2 = %u\n", i2, j2, k2);
  printf("i3 = %d, j3 = %ld, k3 = %u\n", i3, j3, k3);
  printf("i4 = %d, j4 = %ld, k4 = %u\n", i4, j4, k4);
  printf("i5 = %d, j5 = %ld, k5 = %u\n", i5, j5, k5);

  return 0;
}
