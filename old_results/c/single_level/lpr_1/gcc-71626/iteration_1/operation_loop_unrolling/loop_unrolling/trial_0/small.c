typedef long d __attribute__((__vector_size__(sizeof(long))));

// Function definition
void fn1() {}

// Function fn2
d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}

// main function
int main() {}
