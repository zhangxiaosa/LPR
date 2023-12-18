#include<stdio.h>

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
  l.int_field_d = j.int_field_e;
  int int_var_o = l.int_field_d;
  signed int_var_p = int_var_o | -(l.int_field_f && l.int_field_d) - (j.int_field_h && j.int_field_e);
  i.int_field_g = int_var_p;
}
