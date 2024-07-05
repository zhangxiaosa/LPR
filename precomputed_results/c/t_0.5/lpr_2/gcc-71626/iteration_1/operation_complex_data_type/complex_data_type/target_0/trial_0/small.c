typedef long __attribute__((__vector_size__(sizeof(long)))) d;

long fn1() {}

d fn2() {
  long c = fn1();
  d f = {c};
  return f;
}

int main() {}