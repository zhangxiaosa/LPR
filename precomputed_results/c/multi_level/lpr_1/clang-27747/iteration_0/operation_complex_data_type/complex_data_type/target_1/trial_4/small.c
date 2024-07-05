#include <stdio.h>

int i_d, i_e, i_f, i_g, i_h;
int j_d, j_e, j_f, j_g, j_h;

int main() {
  i_d = j_e;
  int n = j_h && i_d;
  i_g = i_d | -(i_f && i_d) - n;
}