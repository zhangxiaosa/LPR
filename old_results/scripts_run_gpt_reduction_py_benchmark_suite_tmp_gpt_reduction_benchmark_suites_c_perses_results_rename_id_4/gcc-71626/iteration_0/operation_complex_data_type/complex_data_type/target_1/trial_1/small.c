typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn2() {
  long c = (long)fn1; // Assuming `fn1` is a function returning a `long` value
  long f = c;
  return f;
}

int main() {
  return 0;
}