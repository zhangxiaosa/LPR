
typedef long d __attribute__((__vector_size__(sizeof(long))));

inline d fn1() {}

d fn2() {
  d f = {fn1};
  return f;
}

int main() {}
