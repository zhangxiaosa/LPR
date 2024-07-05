long c;
long long __attribute__((__vector_size__(sizeof(long)))) f;

void fn1() {}

long long __attribute__((__vector_size__(sizeof(long)))) inline_fn2() {
  c = (long)fn1;
  f = {c};
  return f;
}

int main() {}
