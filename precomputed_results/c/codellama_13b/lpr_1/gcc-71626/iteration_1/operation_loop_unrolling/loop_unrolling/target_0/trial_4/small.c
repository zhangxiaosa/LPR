
typedef long a;

a fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  d f = {fn1};
  return f;
}

main() {
  a x = 0;
  while (x < 10) {
    fn2();
    x++;
  }
}
