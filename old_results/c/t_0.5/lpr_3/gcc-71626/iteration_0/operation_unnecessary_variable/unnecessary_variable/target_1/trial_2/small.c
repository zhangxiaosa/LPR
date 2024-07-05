typedef long d __attribute__((__vector_size__(sizeof a)));

void fn1() {}

d fn2() {
  long c = 0;
  return {0};
}

int main() {}
