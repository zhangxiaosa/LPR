
typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

void fn2() {
  long c = fn1;
  long f[sizeof(long)];
  for (int i = 0; i < sizeof(long); i++) {
    f[i] = c[i];
  }
  return f;
}

int main() {
  long c = fn1;
  long f[sizeof(long)];
  for (int i = 0; i < sizeof(long); i++) {
    f[i] = c[i];
  }
  return 0;
}
