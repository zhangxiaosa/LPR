
<SYS>

// Decomposition of the `d` type into primary data types
typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  long c = fn1;
  long f[sizeof(long)] = {c};
  return f;
}

// Optimized version of the program
long fn1() {}
long fn2() {
  long c = fn1;
  return c;
}

main() {}

</SYS>
