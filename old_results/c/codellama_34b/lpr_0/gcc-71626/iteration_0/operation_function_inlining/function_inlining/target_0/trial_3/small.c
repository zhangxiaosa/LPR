
typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(a))));

// fn1 is inlined in fn2
d fn2() {
  a c = 0;
  d f = {c};
  return f;
}

main() {}
