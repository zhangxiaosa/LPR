
typedef long d __attribute__((__vector_size__(sizeof(long))));

struct d_struct {
  long *vector;
  int size;
};

d_struct fn1() {}

d_struct fn2() {
  d_struct f = {fn1};
  return f;
}

d_struct main() {}
