
typedef long a;
void fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  long c = void;
  d f = {c};
  return f;
}
main() {}
