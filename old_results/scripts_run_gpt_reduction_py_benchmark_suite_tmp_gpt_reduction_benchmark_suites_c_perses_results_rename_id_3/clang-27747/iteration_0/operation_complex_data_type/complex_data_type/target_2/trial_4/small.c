struct c {
  signed int_field_d : 18;
  unsigned int_field_e;
  unsigned int_field_f;
  signed int_field_g;
  signed int_field_h;
};

struct c i;
struct c j;

int main() {
  int int_var_b1 = j.int_field_e;
  int int_var_b2 = j.int_field_h && int_var_b1;
  signed int_var_p = int_var_b1 | -(l.int_field_f && l.int_field_d) - int_var_b2;
  i.int_field_g = int_var_p;
}