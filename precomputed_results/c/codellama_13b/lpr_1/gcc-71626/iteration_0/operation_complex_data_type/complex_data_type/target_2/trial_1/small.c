
typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = fn1;
  long f[sizeof(long)];
  for (int i = 0; i < sizeof(long); i++) {
    f[i] = c;
  }
  return f;
}

main() {}
