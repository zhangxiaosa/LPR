
typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(long))));

a fn2() {
  long c = fn1;
  a f = {c};
  return f;
}

a main() {
  a x = fn2();
  return x;
}
