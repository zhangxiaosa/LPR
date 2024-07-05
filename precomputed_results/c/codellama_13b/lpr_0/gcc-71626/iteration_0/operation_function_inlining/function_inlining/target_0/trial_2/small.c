
typedef long a;

a fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(a))));

inline d fn2() {
  a c = fn1();
  d f = {c};
  return f;
}

int main() {}
