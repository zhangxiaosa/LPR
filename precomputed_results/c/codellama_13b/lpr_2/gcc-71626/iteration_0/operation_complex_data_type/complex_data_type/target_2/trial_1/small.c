
typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn1() {
  long c = 0;
  return c;
}

d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}

int main() {
  long c = fn1;
  d f = {c};
  long f_0 = f[0];
  long f_1 = f[1];
  long f_2 = f[2];
  // ...
  printf("f_0 = %ld\n", f_0);
  printf("f_1 = %ld\n", f_1);
  printf("f_2 = %ld\n", f_2);
  // ...
  return 0;
}
