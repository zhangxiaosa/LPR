fn1() {}

typedef long d __attribute__((__vector_size__(sizeof a)));

d fn2() {
  d f = {(long)fn1};
  return f;
}

main() {}
