typedef long a;

fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));
a fn1_inline() {
  a c = fn1; // Inline substitution of fn1
  d f = {c};
  return f;
}

main() {}