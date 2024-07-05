typedef long d __attribute__((__vector_size__(sizeof a)));

void fn1() {}

d fn2() {
  long c = (long)fn1;
  return (d){c};
}

int main() {
  return 0;
}