typedef long a;

typedef a d __attribute__((__vector_size__(sizeof(a))));

inline void fn2() {
  a c;
  d f;
  {}
  f = {c};
  return f;
}

int main() {
  fn2();
  return 0;
}