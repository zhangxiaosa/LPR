typedef long a;

typedef a d __attribute__((__vector_size__(sizeof(a))));

// Inlined version of fn2
inline d fn2() {
  a c;
  d f = {c};
  return f;
}

int main() {
  // Call to inlined fn2
  d result = fn2();

  return 0;
}