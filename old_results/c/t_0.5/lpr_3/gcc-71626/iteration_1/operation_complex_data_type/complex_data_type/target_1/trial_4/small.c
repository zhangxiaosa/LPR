fn1() {}

typedef long d __attribute__((__vector_size__(sizeof a)));

long fn2() {
  long c = (long)fn1;
  long f[] = {c};
  return f[0];
}

main() {}