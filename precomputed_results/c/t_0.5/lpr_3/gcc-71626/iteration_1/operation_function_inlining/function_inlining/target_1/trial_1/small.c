fn1() {}

typedef long d __attribute__((__vector_size__(sizeof a)));

main() {
  long c = fn1;
  d f = {c};
  return f;
}