int int_var_d;
int int_var_e;
int int_var_f;
int int_var_g;
int int_var_h;
int int_var_b2;
int int_var_p;

int main() {
  int_var_d = 24;
  int_var_e = i.int_field_e;
  int_var_f = 165;
  int_var_d = i.int_field_e;
  int_var_b2 = i.int_field_h && int_var_d;
  int_var_p = int_var_d | -(int_var_f && int_var_d) - int_var_b2;
  i.int_field_g = int_var_p;
}