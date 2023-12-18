typedef long a;

void fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c; // Inline variable c
  d f; // Inline variable f

  // Inline fn1()

  // Nothing to inline here (fn1 is empty)

  f = {c}; // Initialize f with c
  return f;
}

int main() {}
