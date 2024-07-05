
// Eliminate the typedef long a;

long __attribute__((__vector_size__(sizeof(long))));

fn1() {}

long fn2() {
  long f = {fn1};
  return f;
}

main() {}
