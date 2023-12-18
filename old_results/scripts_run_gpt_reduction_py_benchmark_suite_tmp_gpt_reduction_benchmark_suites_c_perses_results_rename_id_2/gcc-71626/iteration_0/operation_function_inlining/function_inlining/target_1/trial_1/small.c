typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(a))));

main() {
  a c = fn1;
  d f = {c};
  // inlined function body of fn2
  // replace the call to fn2 with its body
  // a c = fn1;
  // d f = {c};
  // return f;
}