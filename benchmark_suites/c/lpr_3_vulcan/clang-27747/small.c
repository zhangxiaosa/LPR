struct c {
  int int_field_d : 18;
} i;
signed main() {
  struct c l;
  l.int_field_d = i.int_field_d;
  long int_var_b2 = i.int_field_d && i.int_field_d;
  signed int_var_p =
      l.int_field_d | -(i.int_field_d && l.int_field_d) - int_var_b2;
  i.int_field_d = int_var_p;
}
