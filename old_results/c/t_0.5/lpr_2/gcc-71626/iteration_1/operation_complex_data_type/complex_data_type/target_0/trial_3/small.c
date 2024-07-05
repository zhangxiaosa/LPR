typedef long __attribute__((__vector_size__(sizeof(long)))) d;

long fn2() {
  long c = /* Replace fn1 with valid value */;
  long f = c;
  return f;
}

int main() {
  return 0;
}