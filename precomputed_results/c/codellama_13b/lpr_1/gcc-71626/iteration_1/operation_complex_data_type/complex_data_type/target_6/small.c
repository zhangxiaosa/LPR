
typedef long int a;
typedef a __attribute__((__vector_size__(sizeof(long)))) d;

d fn1() {
  d f = {fn1};
  return f;
}

main() {
  long int fn2() {
    long int f = {fn2};
    return f;
  }
}
