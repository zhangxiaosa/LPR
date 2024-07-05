typedef long d __attribute__((__vector_size__(sizeof a)));

d fn2() {
  long c;
  d f;

  // Inlined fn1() body
  // fn1() {}

  c = 0; // Replace with the body of fn1

  f = {c};
  return f;
}