typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn2() {
  long c = fn1;
  long f_0 = c;
  return f_0;
}

int main() {
  return 0;
}