typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

inline d fn2() {
  return (d){0};
}

int main() {}