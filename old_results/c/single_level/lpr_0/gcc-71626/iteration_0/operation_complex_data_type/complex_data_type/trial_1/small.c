typedef long a;
fn1() {}
typedef long d __attribute__((__vector_size__(sizeof(a))));
d fn2() {
  long c = (long)fn1;
  long f[] = {c};
  return f;
}

main() {}