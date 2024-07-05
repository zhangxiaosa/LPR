#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  int l_d = l.d;           // Decomposed variable for l.d
  int l_e = l.e;           // Decomposed variable for l.e
  int l_f = l.f;           // Decomposed variable for l.f
  int l_g = l.g;           // Decomposed variable for l.g
  int l_h = l.h;           // Decomposed variable for l.h

  l_d = j.e;

  int n = j.h && l_d;

  int l_f_and_l_d = l_f && l_d;
  int neg_l_f_and_l_d = -l_f_and_l_d;
  int p = l_d | neg_l_f_and_l_d - n;

  i.g = p;
}