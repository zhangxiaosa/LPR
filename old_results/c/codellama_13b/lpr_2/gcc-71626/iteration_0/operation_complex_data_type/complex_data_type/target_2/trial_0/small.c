
typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn1() {
  long c = 0;
  return c;
}

d fn2() {
  long c = fn1();
  long a = c;
  long b = c;
  d f = {a, b};
  return f;
}

int main() {
  long c = fn1();
  long a = c;
  long b = c;
  d f = {a, b};
  printf("f[0] = %ld\n", f[0]);
  return 0;
}
