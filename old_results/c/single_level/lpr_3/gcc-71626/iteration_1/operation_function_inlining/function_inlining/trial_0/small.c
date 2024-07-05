typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c;
  d f;

  // Inlined code from fn1
  // Original: long c = fn1;
  c = 0;

  // Inlined code from fn1
  // Original: d f = {c};
  f = (d){c};

  return f;
}

int main() {
  return 0;
}