#include <stdio.h>

struct c {
  int int_field_d : 18;
  int int_field_e;
  int int_field_f;
  int int_field_g;
  int int_field_h;
};

struct c i;

int main() {
  int int_var_b = i.int_field_e;
  struct c l = {0, int_var_b, 165};
  l.int_field_d = int_var_b;
  int int_var_b2 = i.int_field_h && l.int_field_d;
  signed int_var_p = l.int_field_d | -(l.int_field_f && l.int_field_d) - int_var_b2;
  i.int_field_g = int_var_p;
  return 0;
}