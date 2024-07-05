typedef long __attribute__((__vector_size__(sizeof(long)))) d;
long fn2() {
  long c = (long)fn1;
  long f = c;
  return f;
}
int main() {}