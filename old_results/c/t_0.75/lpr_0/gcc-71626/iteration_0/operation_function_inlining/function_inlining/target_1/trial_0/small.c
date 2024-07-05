typedef long a;

void fn2() {
  typedef a d __attribute__((__vector_size__(sizeof(a))));
  d f = {fn1};
}
