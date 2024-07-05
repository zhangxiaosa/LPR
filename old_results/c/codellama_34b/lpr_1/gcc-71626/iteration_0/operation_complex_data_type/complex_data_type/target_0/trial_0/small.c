
typedef long d __attribute__((__vector_size__(sizeof(long))));

int fn1() {
  // Decomposed code for fn1
  long a = 0;
  long b = 0;
  long c = 0;

  // Original code for fn1
  long c = fn1;
  d f = {c};
  return f;
}

d fn2() {
  // Decomposed code for fn2
  long c = 0;
  d f = {c};
  return f;
}

int main() {
  // Decomposed code for main
  long a = 0;
  long b = 0;
  long c = 0;

  // Original code for main
  d f = fn2();
  return f;
}
