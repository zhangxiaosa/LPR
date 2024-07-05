#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

int main() {
  int i_d, i_e, i_f, i_g, i_h;
  int j_d, j_e, j_f, j_g, j_h;

  struct c i = {0, 0, 0, 0, 0};
  struct c j = {0, 0, 0, 0, 0};

  struct c l = {24, 6738, 165};

  i_d = j_e;

  int n = j_h && i_d;

  i_g = i_d | -(i_f && i_d) - n;

  // Additional logic or print statements can be added here

  return 0;
}