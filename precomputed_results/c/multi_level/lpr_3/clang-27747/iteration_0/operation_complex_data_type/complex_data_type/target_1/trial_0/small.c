#include <stdio.h>

struct c {
  signed int int_field_d;
  unsigned int int_field_e;
  unsigned int int_field_f;
  signed int int_field_g;
  signed int int_field_h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  signed int int_var_b1 = j.int_field_e;
  l.int_field_d = int_var_b1;
  signed int int_var_b2 = j.int_field_h && l.int_field_d;
  signed int int_var_o = l.int_field_d;
  signed int int_var_p = int_var_o | -(l.int_field_f && l.int_field_d) - int_var_b2;
  i.int_field_g = int_var_p;
}
