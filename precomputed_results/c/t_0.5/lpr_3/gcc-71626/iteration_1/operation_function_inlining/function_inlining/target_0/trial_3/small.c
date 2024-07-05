typedef long d __attribute__((__vector_size__(sizeof a)));

d fn2() {
  long c;
  d f;
  c = 0; // Replace with the actual code of fn1()
  f = {c};
  return f;
}

main() {}
