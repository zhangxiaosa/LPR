#include <stdbool.h>

int i_d;
int i_f;
int i_g;

unsigned j_e;
int j_h;

int main() {
  int l_d = 24;
  int l_f = 6738;

  i_d = j_e;

  int n = j_h && i_d;

  int p = i_d | -(l_f && i_d) - n;

  i_g = p;
}
