#include <stdio.h>

struct c {
  signed int int_field_d : 18;
  unsigned int int_field_e;
  unsigned int int_field_f;
  signed int int_field_g;
  signed int int_field_h;
};

struct c i;
struct c j = {0, 0, 0, 0, 0};

int main() {
  struct c l = {24, 6738, 165};
  int int_var_o = l.int_field_d;
  signed int int_var_p = int_var_o | -(l.int_field_f && l.int_field_d);
  i.int_field_g = int_var_p;
}
