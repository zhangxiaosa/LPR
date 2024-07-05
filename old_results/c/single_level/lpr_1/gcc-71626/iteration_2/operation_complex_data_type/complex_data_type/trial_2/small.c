typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

long fn2() {
  typedef long d __attribute__((__vector_size__(sizeof(long))));
  d f = { (long)&fn1 };
  return *(long *)&f;
}

int main() {}