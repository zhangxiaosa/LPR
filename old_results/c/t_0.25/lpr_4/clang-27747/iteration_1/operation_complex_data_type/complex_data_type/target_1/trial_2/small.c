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
  struct c l = {24, 6738, 165};
  signed int l_d = j.e;
  int n = j.h && l_d;
  signed int l_f_and_l_d = l.f && l_d;
  int negated_l_f_and_l_d = -l_f_and_l_d;
  int n_minus_negated_l_f_and_l_d = n - negated_l_f_and_l_d;
  i.g = l_d | n_minus_negated_l_f_and_l_d;
}