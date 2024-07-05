
<SYS>

int fn1() {}
typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}
main() {}

// Optimized loop using loop unrolling
while (xxx) {
  // Body of the loop
}
