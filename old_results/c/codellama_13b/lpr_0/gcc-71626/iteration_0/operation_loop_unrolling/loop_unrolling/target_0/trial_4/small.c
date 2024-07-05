
typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c = fn1;
  d f[8];

  for (int i = 0; i < 8; i++) {
    f[i] = c;
  }

  return f;
}

main() {}
