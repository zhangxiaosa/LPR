
typedef long d __attribute__((__vector_size__(sizeof(long))));

typedef struct {
  long x;
  long y;
} d_primitive;

d_primitive d_to_d_primitive(d f) {
  d_primitive result;
  result.x = f.x;
  result.y = f.y;
  return result;
}

d d_primitive_to_d(d_primitive f) {
  d result;
  result.x = f.x;
  result.y = f.y;
  return result;
}

d fn1() {
  d f = {fn1};
  return f;
}

int main() {
  d f = fn1();
  d_primitive f_primitive = d_to_d_primitive(f);
  // use f_primitive as needed
  return 0;
}
