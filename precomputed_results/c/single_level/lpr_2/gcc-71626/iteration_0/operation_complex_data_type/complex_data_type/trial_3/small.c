fn1() {}

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = fn1;
  long element0 = c;  // Extract the first element of d
  d f = {element0};
  return f;
}

int main() {}
