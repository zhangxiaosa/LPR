typedef long d __attribute__((__vector_size__(sizeof(long))));

// Original fn1 renamed to _fn1
void _fn1() {}

int main() {
  // Inlined code from fn2() incorporating fn1
  d f = {_fn1};

  // Rest of the code
}
