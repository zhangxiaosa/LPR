long a;
void fn1() {}
typedef long a_type;
a_type a;
typedef a_type d_type __attribute__((__vector_size__(sizeof(a_type))));
d_type fn2() {
  a_type c = fn1;
  d_type f = {c};
  return f;
}
void main() {}