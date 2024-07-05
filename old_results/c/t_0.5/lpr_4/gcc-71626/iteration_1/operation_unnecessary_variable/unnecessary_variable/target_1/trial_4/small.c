typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = fn1();  // Assuming fn1 is a function call
  return (d){c};
}

int main() {
  return 0;
}