typedef long a;

void fn1() {}

long __attribute__((__vector_size__(sizeof(long)))) fn2() {
  long c = fn1;
  long __attribute__((__vector_size__(sizeof(long)))) f = {c};
  return f;
}

int main() {}