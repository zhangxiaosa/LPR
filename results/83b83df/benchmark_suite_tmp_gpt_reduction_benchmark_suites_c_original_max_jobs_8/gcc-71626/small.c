typedef long llong;
test1char8() {}
typedef llong vllong1 __attribute__((__vector_size__(sizeof(llong))));
vllong1 test2llong1() {
  llong c = test1char8;
  vllong1 v = {c};
  return v;
}
main() {}
