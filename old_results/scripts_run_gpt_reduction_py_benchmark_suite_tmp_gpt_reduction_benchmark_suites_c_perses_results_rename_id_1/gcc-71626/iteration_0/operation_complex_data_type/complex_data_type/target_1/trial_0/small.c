typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = fn1;
  long f = c;
  return f;
}

int main() {
  return 0;
}