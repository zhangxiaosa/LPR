fn1() {}
typedef long d __attribute__((__vector_size__(sizeof a)));
long fn2() {
  long f = {fn1};
  return f;
}
main() {}
