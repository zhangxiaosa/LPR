#include <stdio.h>

char fn1(char p1, char p2) {
  return p1 * p2;
}

signed int h;
int i;

int main() {
  char p3;
  char result;
  
  for (p3 = 6; p3 != -7; p3--) {
    char fnResult = fn1(p3, i);
    char bitwiseResult = fnResult && 1L;
    h ^= bitwiseResult;
    result = bitwiseResult; // Store the last bitwise result in a separate variable
  }
  
  int b = result; // Assign the last bitwise result to the optimized variable b
  
  return 0;
}