typedef long a;
void fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));

__attribute__((always_inline)) inline d fn2() {
  d f;
  a c;
  c = 0;
  f = {c};
  return f;
}

int main() {}