double llong;
typedef long vllong1 __attribute__((__vector_size__(sizeof llong)));
vllong1 test2llong1() {
  vllong1 v = {test2llong1};
  return v;
}
main() {}
