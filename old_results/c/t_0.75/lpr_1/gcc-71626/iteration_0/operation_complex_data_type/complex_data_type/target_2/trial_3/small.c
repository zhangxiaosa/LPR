long fn1() {}

long long __attribute__((__vector_size__(sizeof(long)))) inline_fn2() {
  long c = fn1();
  long long __attribute__((__vector_size__(sizeof(long)))) f = {c};
  return f;
}

int main() {}.