original_data_type fn1(original_data_type p1, original_data_type p2) { return p1 * p2; }

original_data_type i;
original_data_type j_h;
original_data_type *fn2(unsigned p1, original_data_type *p2, original_data_type p3) {
  for (p3 = 6; p3 != -7; p3--)
    j_h ^= fn1(p3, i) && 1L;
  return p2;
}

int main() { return 0; }
