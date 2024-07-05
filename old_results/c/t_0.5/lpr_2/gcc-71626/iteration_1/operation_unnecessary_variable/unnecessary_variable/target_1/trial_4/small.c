typedef long __attribute__((__vector_size__(sizeof(long)))) d;

void fn1() {}

d fn2() {
  long c;
  return (d)c;
}

int main() {
  return 0;
}