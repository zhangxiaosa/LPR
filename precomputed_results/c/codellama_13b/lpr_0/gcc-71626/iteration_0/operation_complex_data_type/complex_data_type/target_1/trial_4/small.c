
typedef long a;

typedef a d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = fn1;
  long f = c;
  return f;
}

main() {
  long c = fn1();
  long *ptr = &c;
  long f = *ptr;
  return f;
}
