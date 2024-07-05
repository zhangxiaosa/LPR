#include <stdio.h>

struct c {
  signed int d;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
struct c j;

int main() {
  signed int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;

  signed int j_e = j.e;

  int j_h = j.h;
  int l_d_logical_and = l_d;

  int n = j_h && l_d_logical_and;

  signed int l_f_logical_and = l_f && l_d_logical_and;
  signed int l_f_logical_and_negation = -l_f_logical_and;

  signed int p = l_d | l_f_logical_and_negation - n;

  i.g = p;

  return 0;
}