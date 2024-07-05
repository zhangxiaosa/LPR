
typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  return (d){(long)fn1};
}

main() {}
