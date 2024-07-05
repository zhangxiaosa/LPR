
typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  long c = 0;
  return {c};
}
main() {}
