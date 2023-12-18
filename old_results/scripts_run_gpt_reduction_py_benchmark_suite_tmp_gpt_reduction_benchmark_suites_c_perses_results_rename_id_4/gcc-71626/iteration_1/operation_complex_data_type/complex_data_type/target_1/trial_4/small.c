typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn1_result;

void fn1() {}

long fn2() {
  long c = fn1_result;
  long f = c;
  return f;
}

int main() {}
