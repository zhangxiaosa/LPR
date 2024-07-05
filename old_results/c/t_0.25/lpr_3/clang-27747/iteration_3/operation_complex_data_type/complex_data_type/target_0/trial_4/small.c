#include <stdbool.h>

int i_d;
int i_e;
int i_f;
int i_g;
int j_d;
int j_e;
int j_f;
int j_g;
int l_d;
int l_e;
int l_f;
int l_g;
bool jh_ld;

int main() {
  struct c {
    int d : 18;
    int e;
    int f;
    int g;
  };

  struct c i;
  struct c j;

  struct c l = {24, 6738, 165};
  l_d = j_e;
  jh_ld = j_e && l_d;
  i_g = l_d | -(l_f && l_d) - jh_ld;
}