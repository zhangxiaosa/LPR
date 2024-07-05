
typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = 0; // or any other initial value
  d f;
  f.c = c;
  return f;
}

main() {}
