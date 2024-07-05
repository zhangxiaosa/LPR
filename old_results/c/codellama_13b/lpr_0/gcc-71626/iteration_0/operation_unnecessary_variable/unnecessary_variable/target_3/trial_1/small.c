
typedef long a;

typedef a d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  d f = {0};
  return f;
}

main() {}
