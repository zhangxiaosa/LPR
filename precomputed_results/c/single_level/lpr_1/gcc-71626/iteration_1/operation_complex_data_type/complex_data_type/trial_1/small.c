typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn1() {
  // Function implementation
}

d fn2() {
  long c = fn1();
  long f[] = {c};
  return f;
}

int main() {
  // Main function implementation
}