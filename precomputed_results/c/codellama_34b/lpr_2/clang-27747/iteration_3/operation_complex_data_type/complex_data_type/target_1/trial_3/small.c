
#include <stdio.h>

// Decomposition of struct c
int d1;
int d2;

// Decomposition of struct c i
int i_d1;
int i_d2;

// Decomposition of struct c j
int j_d1;
int j_d2;

int main() {
  // Decomposition of struct c l
  int l_d1;
  int l_d2;

  // Assignment of values to the decomposed variables
  d1 = j_d1;
  d2 = j_d2;

  l_d1 = d1;
  l_d2 = d2;

  int n = d1 && l_d1;
  int p = l_d1 | -(l_d1 && l_d1) - n;

  i_d1 = p;
  i_d2 = p;
}
