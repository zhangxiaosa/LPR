#include <stdio.h>

struct c {
  int int_field_d : 18;
  int int_field_e;
  int int_field_f;
  int int_field_g;
  int int_field_h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, j.int_field_e, 165};
  int int_var_b2 = j.int_field_h && j.int_field_e;
  signed int_var_p = j.int_field_e | -(l.int_field_f && j.int_field_e) - int_var_b2;
  i.int_field_g = int_var_p;
}