typedef long d __attribute__((__vector_size__(sizeof a)));

d fn2() {
  d f = {};
  return f;
}

main() {}
