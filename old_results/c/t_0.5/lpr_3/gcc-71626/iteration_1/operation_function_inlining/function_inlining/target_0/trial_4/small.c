typedef long d __attribute__((__vector_size__(sizeof a)));

d fn2() {
  long c; // Removed the initialization with fn1
  d f = {c};
  return f;
}

main() {}