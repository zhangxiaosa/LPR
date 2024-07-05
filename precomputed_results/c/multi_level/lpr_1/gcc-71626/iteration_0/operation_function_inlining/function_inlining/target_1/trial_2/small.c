typedef long a;

typedef a d __attribute__((__vector_size__(sizeof(a))));

// Inline fn1

d fn2() {
  a c = {};
  return c;
}

int main() {}
