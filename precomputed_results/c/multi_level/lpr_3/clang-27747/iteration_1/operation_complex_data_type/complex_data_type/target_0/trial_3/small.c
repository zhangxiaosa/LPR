#include <stdbool.h>

struct c {
  unsigned int int_field_d : 18;
  int int_field_e;
  int int_field_f;
  int int_field_g;
  int int_field_h;
};

struct c i;

int main() {
  struct c l = {24, i.int_field_e, 165};

  l.int_field_d = i.int_field_e;

  bool int_field_h_boolean = i.int_field_h;
  bool int_field_d_boolean = l.int_field_d;
  int int_var_b2 = int_field_h_boolean && int_field_d_boolean;

  bool int_field_f_boolean = l.int_field_f;
  bool int_field_d_boolean_2 = l.int_field_d;
  bool int_field_f_and_d_boolean = int_field_f_boolean && int_field_d_boolean_2;
  int int_var_p_negated = -(int_field_f_and_d_boolean);
  int int_var_p = l.int_field_d | int_var_p_negated;

  i.int_field_g = int_var_p;
}
