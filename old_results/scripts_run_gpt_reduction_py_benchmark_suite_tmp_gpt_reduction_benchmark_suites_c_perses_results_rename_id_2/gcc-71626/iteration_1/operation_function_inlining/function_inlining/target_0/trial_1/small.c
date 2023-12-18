typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c;
  // Function body of fn1 is directly inserted here
  c;
  d f = {c};
  return f;
}

int main() {
  return 0;
}