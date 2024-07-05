int i_int_field_e;
int i_int_field_h;
int l_int_field_d;
int l_int_field_f;
int int_var_p;

int main() {
  int l_int_field_e = i_int_field_e;
  int l_int_field_f = 165;

  l_int_field_d = i_int_field_e;
  int int_var_b2 = i_int_field_h && l_int_field_d;

  int_var_p = l_int_field_d | -(l_int_field_f && l_int_field_d) - int_var_b2;

  i_int_field_g = int_var_p;
}