#include <stdio.h>

signed j_h;
int i;

int main() {
  char p3;
  char p1, p2; // Decomposed variables of fn1
  char result; // Variable to store the result of p1 * p2

  for (p3 = 6; p3 != -7; p3--)
    j_h ^= (p1 * p2) && 1; // Replace fn1 with p1 * p2

  return 0;
}