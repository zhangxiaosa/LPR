
#include <stdio.h>

// Define the variables and functions used in the program
typedef unsigned char u_char;
typedef short s_short;

void fn1(short p1, int p2) {
  printf("checksum = %X\n", p1);
}

short fn2(short p1, short p2) {
  return p1 - p2;
}

short fn3(short p1, short p2) {
  return p1 - p2;
}

short fn5(short p1, short p2) {
  return p2;
}

short fn6(short p1, short p2) {
  return p1 - p2;
}

// Define the main function
int main() {
  // Define the variables used in the program
  short p;
  u_char u;
  short v;
  u_char w;
  short ab;
  u_char ac;

  // Initialize the variables
  p = 0;
  u = 0;
  v = 0;
  w = 0;
  ab = 0;
  ac = 0;

  // Call the fn13 function
  short ae = fn13();

  // Call the fn9 function
  fn9(v, "g_170", p);

  // Call the fn1 function
  fn1(p, p);

  return 0;
}

// Define the fn13 function
short fn13() {
  // Define the variables used in the function
  short af;
  u_char ag;
  short ai;
  short aj;
  short al;
  short am;
  short an;
  short ao;
  short ap;
  u_char p1;
  u_char p2;
  u_char p3;
  u_char p4;

  // Initialize the variables
  af = 0x2F2F6D26L;
  ag = 248UL;
  ai = 7L;
  aj = 1UL;
  al = 3L;
  am = 1L;
  an = 250UL;
  ao = 0xBCD1L;
  ap = 0xBCD1L;
  p1 = 2L;
  p2 = 0;
  p3 = 1;
  p4 = 1;

  // Call the fn10 function
  u_char result = fn10(p1, p2);

  // Return the result
  return result;
}

// Define the fn10 function
u_char fn10(short p1, short p2) {
  // Define the variables used in the function
  short af;
  u_char ag;
  short ai;
  short aj;
  short al;
  short am;
  short an;
  short ao;
  short ap;
  u_char p1;
  u_char p2;
  u_char p3;
  u_char p4;

  // Initialize the variables
  af = 0x2F2F6D26L;
  ag = 248UL;
  ai = 7L;
  aj = 1UL;
  al = 3L;
  am = 1L;
  an = 250UL;
  ao = 0xBCD1L;
  ap = 0xBCD1L;
  p1 = 2L;
  p2 = 0;
  p3 = 1;
  p4 = 1;

  // Call the fn11 function
  u_char result = fn11(p1, p2, p3, p4);

  // Return the result
  return result;
}

// Define the fn11 function
u_char fn11(u_char p1, short p2, short p3, short p4) {
  // Define the variables used in the function
  short af;
  u_char ag;
  short ai;
  short aj;
  short al;
  short am;
  short an;
  short ao;
  short ap;
  u_char p1;
  u_char p2;
  u_char p3;
  u_char p4;

  // Initialize the variables
  af = 0x2F2F6D26L;
  ag = 248UL;
  ai = 7L;
  aj = 1UL;
  al = 3L;
  am = 1L;
  an = 250UL;
  ao = 0xBCD1L;
  ap = 0xBCD1L;
  p1 = 2L;
  p2 = 0;
  p3 = 1;
  p4 = 1;

  // Call the fn12 function
  u_char result = fn12(p1, p2, p3, p4);

  // Return the result
  return result;
}

// Define the fn12 function
u_char fn12(short p1, short p2, u_char p3, short p4, short p5) {
  // Define the variables used in the function
  short af;
  u_char ag;
  short ai;
  short aj;
  short al;
  short am;
  short an;
  short ao;
  short ap;
  u_char p1;
  u_char p2;
  u_char p3;
  u_char p4;

  // Initialize the variables
  af = 0x2F2F6D26L;
  ag = 248UL;
  ai = 7L;
  aj = 1UL;
  al = 3L;
  am = 1L;
  an = 250UL;
  ao = 0xBCD1L;
  ap = 0xBCD1L;
  p1 = 2L;
  p2 = 0;
  p3 = 1;
  p4 = 1;

  // Perform the calculations
  short result = fn2(fn3(ao, fn6(am, an)), p2);

  // Return the result
  return result;
}
