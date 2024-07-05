typedef long d __attribute__((__vector_size__(sizeof(long))));
long fn2() {
  long c = fn1;
  long f1, f2, f3, f4; // Decomposed variables representing vector f
  f1 = c[0];
  f2 = c[1];
  f3 = c[2];
  f4 = c[3];
  return f1; // Return the first element of the decomposed vector
}
main() {}