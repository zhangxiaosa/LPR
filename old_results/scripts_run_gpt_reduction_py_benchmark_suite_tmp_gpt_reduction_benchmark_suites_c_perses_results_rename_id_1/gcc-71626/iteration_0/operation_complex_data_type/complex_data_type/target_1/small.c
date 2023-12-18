typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn1() {}

d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}

int main() {}
