#include<stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
} i;

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
} j;

int main() {
  signed d_i, d_j;
  unsigned e_i, e_j, f_i, f_j;
  signed g_i, g_j, h_i, h_j;
  
  struct c l = {24, 6738, 165};
  d_i = 24;
  e_i = 6738;
  f_i = 165;
  
  l.d = j.e;
  d_j = j.e;

  int n = j.h && l.d;
  h_j = j.h;
  signed n_value = (h_j && d_j);
  
  i.g = l.d | -(l.f && l.d) - n;
  f_i = l.f;
  g_i = l.d | -(f_i && l.d) - n_value;
  
  return 0;
}