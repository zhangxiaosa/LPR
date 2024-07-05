fn1() {}
typedef long __attribute__((__vector_size__(sizeof a))) long;
long fn2() {
  long f = {fn1};
  return f;
}
main() {}