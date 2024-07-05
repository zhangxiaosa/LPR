
typedef long int a;
typedef a __attribute__((__vector_size__(sizeof(long)))) d;

d fn1() {
  return fn1;
}

main() {
  long int fn2() {
    return fn2;
  }
}
