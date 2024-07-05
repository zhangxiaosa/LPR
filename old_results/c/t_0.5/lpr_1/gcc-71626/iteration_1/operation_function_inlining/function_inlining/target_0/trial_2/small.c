typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c;
  d f = {c};
  return f;
}

int main() {
  // The body of fn1 is empty, so we don't need to call it.
  // We can simply remove the call to fn1.
}