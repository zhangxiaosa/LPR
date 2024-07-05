c
typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn1() {
  long x;
  long y;
  long z;
  long sum;

  x = 1;
  y = 2;
  z = 3;
  sum = x + y + z;

  return sum;
}

d fn2() {
  d fn1_result;

  fn1_result = fn1();

  return fn1_result;
}

int main() {
  d result;

  result = fn2();

  return result;
}
