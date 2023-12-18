#include <stdio.h>

char fn2(char p1, char p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

char q;
unsigned w = 0xDC6F3D13L;
long long ag3;
short ah;
long long ak;
unsigned ao;
unsigned ap;

int main() {
  ak = 0;

  // Unroll the loop manually
  // Iteration 1
  ah = 0;
  unsigned assigned_value_0 = ~((fn2(ap, 1L) != 0) + ak) && 0x57L;
  if (w) {
    q = 0x41AEA787L;
    ag3 = assigned_value_0;
  } else {
    ao = assigned_value_0;
  }
  
  // Iteration 2
  ah = 1;
  unsigned assigned_value_1 = ~((fn2(ap, 1L) != 0) + ak) && 0x57L;
  if (w) {
    q = 0x41AEA787L;
    ag3 = assigned_value_1;
  } else {
    ao = assigned_value_1;
  }
  
  // Iteration 3
  ah = 2;
  unsigned assigned_value_2 = ~((fn2(ap, 1L) != 0) + ak) && 0x57L;
  if (w) {
    q = 0x41AEA787L;
    ag3 = assigned_value_2;
  } else {
    ao = assigned_value_2;
  }

  printf("checksum = %X\n", q);
  return 0;
}