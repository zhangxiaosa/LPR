#include <stdbool.h>

// Variables with primary data types
signed int l_d;
unsigned int l_e;
unsigned int l_f;
signed int l_g;
signed int l_h;

signed int j_e;
signed int j_h;

int main() {
  // Initialize the variables
  l_d = 24;
  l_e = 6738;
  l_f = 165;

  // Assign the value of j.e to l.d
  l_d = j_e;

  // Assign the logical AND of j.h and l.d to n
  int n = (j_h != 0) && (l_d != 0);

  // Assign the value of l.d to o
  int o = l_d;

  // Compute the expression
  int result = o | (-(l_f != 0 && l_d != 0) - n);

  return 0;
}