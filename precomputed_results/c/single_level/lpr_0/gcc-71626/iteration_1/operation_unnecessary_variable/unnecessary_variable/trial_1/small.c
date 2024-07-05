long fn1() {}

typedef long d __attribute__((__vector_size__(sizeof a)));

d fn2() {
  return fn1();
}

int main() {}
