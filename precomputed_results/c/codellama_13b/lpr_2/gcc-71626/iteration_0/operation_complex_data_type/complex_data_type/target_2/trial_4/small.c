
typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2(long input) {
  d f = {input};
  return f;
}

int main() {
  long c = fn1;
  d f = fn2(c);
  printf("f[0] = %ld\n", f[0]);
  return 0;
}
