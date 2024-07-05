typedef long a;

typedef a d __attribute__((__vector_size__(sizeof(a))));

// Empty body of fn1

inline void fn2() {
  a c;
  d f = {c};
  return f;
}

int main() {
  // No call to fn1
}
