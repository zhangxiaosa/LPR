fn1() {}

typedef long a_elem_type;
const size_t a_size = sizeof(a) / sizeof(a_elem_type);
a_elem_type a_vector_elements[a_size];

a_vector fn2() {
  a_vector f = {a_vector_elements};
  return f;
}

int main() {
  return 0;
}