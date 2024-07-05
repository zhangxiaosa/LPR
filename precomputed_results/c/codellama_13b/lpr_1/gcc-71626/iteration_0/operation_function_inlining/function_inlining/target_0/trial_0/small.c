
typedef long a;

inline a fn1() {
  return 0;
}

typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  d f = {fn1};
  return f;
}

int main() {}
