
typedef long a;

a fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  d f = {fn1};
  return f;
}

int main() {
  d f = fn2();
  return 0;
}
