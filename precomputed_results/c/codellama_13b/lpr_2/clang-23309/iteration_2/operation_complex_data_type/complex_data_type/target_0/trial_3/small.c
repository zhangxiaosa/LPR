c
#include <stdio.h>
#include <stdint.h>

// Function prototypes
short fn10(short, short);
short fn12(short, short, short, short, short);

// Global variables
uint16_t ab;

int main() {
  // Initialize variables
  short v = 0;
  short t = 0;
  short w = 3;
  short ac = 1;

  // Call fn13
  fn13();

  // Print checksum
  printf("checksum = %X\n", v);

  return 0;
}

// fn13 function
short fn13() {
  // Initialize variables
  short p1 = 0;
  short p2 = 0;
  short p3 = 0;
  short p4 = 0;
  short p5 = 0;

  // Call fn10
  fn10(v, t);

  // Return 0
  return 0;
}

// fn10 function
short fn10(short p1, short p2) {
  // Initialize variables
  short al = 3;
  short am = 1;
  short an;

  // Loop over w
  for (w = 3; w; w -= 1) {
    // Compute an
    an = 250;

    // Compute p2
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;

    // Compute ao
    short ao = 0xBCD1;

    // Compute v
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xE)), p2) & 1) {
      v = 1;
    }
  }

  // Return al
  return al;
}

// fn12 function
short fn12(short p1, short p2, short p3, short p4, short p5) {
  // Initialize variables
  short al = 3;
  short am = 1;
  short an;

  // Loop over w
  for (w = 3; w; w -= 1) {
    // Compute an
    an = 250;

    // Compute p2
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;

    // Compute ao
    short ao = 0xBCD1;

    // Compute v
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xE)), p2) & 1) {
      v = 1;
    }
  }

  // Return al
  return al;
}

// fn5 function
short fn5(short p1, short p2) {
  // Return p1
  return p1;
}

// fn3 function
short fn3(short p1, short p2) {
  // Return p1 - p2
  return p1 - p2;
}

// fn6 function
short fn6(short p1, short p2) {
  // Return p1 - p2
  return p1 - p2;
}

// fn4 function
short fn4(short p1, short p2) {
  // Return p1
  return p1;
}

// fn2 function
short fn2(short p1, short p2) {
  // Return p1 - p2
  return p1 - p2;
}
