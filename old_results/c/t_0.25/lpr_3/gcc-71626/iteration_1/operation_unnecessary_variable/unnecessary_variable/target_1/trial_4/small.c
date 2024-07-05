typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = 0; // Replace fn1 with its return value
  d f = {c};
  return f;
}

main() {}