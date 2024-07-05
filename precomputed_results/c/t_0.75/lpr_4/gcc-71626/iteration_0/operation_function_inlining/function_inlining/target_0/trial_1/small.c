typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c;
  d f;
  // Inlined code of fn1()
  // start inlined code
  // Empty code block, since fn1() does nothing
  // end inlined code
  f = {c};
  return f;
}

int main() {
  // Empty main function, since fn1() has been inlined
  return 0;
}