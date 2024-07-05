void (*fn1)();

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  void (*c)() = fn1;
  d f = {*(long *)&c};
  return f;
}

int main() {}
