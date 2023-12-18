#include <stdbool.h>

int main() {
  int l_int_field_d = 24;
  int l_int_field_e = i_int_field_e;
  int l_int_field_f = 165;

  l_int_field_d = i_int_field_e;

  bool l_bool_var_b2 = i_int_field_h && l_int_field_d;

  int l_int_var_p = l_int_field_d | -(l_int_field_f && l_int_field_d) - l_bool_var_b2;

  i_int_field_g = l_int_var_p;
}