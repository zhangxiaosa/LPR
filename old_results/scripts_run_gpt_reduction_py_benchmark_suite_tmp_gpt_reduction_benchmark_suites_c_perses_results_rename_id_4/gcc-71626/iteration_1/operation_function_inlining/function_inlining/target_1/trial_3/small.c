typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c;
  d f = {c};  // Note that 'c' is uninitialized after inlining fn1.
  return f;
}

int main() {
  // Removed empty main function body (not necessary for the analysis).
  return 0;
}