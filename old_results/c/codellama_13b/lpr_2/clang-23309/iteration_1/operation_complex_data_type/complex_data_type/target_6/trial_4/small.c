c
#include <stdio.h>

// Variables with primary data types
int v;
int w;
int p;
int t;
int ab;
int ac = 1;
int an;

// Functions with primary data types
int fn2(int p1, int p2) { return p1 - p2; }
int fn3(int p1, int p2) { return p1 - p2; }
int fn4(int p1) { return p1; }
int fn5(int p1, int p2) { return p2; }
int fn6(int p1, int p2) { return p1 - p2; }

int main() {
  // Initialize variables
  v = 0;
  w = 0;
  p = 0;
  t = 0;
  ab = 0;
  ac = 1;
  an = 0;

  // Call fn13() function
  fn13();

  // Print checksum
  printf("checksum = %X\n", p);

  return 0;
}

int fn13() {
  // Initialize variables
  v = 0;
  w = 0;
  p = 0;
  t = 0;
  ab = 0;
  ac = 1;
  an = 0;

  // Call fn10() function
  fn10(v, t);

  // Return checksum
  return p;
}

int fn10(int p1, int p2) {
  // Initialize variables
  v = 0;
  w = 0;
  p = 0;
  t = 0;
  ab = 0;
  ac = 1;
  an = 0;

  // Call fn12() function
  fn12(2, 248, p2, 1, p1);

  // Return checksum
  return p;
}

int fn12(int p1, int p2, int p3, int p4, int p5) {
  // Initialize variables
  v = 0;
  w = 0;
  p = 0;
  t = 0;
  ab = 0;
  ac = 1;
  an = 0;

  // Loop to subtract inputs
  for (int i = 3; i > 0; i--) {
    if (i & 1) {
      p2 = fn5(ab, ac) || (an = i) == 0x294A85636008822D;
      int ao = 0xBCD1;
      if (fn2(fn3(ao, fn4(fn6(an, fn4(ao)))), p2) & 1) {
        v = 1;
      }
    }
  }

  // Return checksum
  return p;
}
