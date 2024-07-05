typedef long a_type;

typedef a_type d_type __attribute__((__vector_size__(sizeof(a_type))));

d_type fn2() {
  return {};
}

int main() {
  return 0;
}