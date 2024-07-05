typedef long a_type;
typedef a_type d_type __attribute__((__vector_size__(sizeof(a_type))));

d_type fn2() {
  a_type c = <value of fn1>;
  d_type f = {<value of c>};
  return f;
}

main() {}
