typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn2() {
  long c = fn1;
  long f[2] = {c};
  return *((d*)f);
}

int main() {
  return 0;
}