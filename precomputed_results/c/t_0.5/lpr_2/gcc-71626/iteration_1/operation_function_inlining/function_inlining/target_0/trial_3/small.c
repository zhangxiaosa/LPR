typedef long __attribute__((__vector_size__(sizeof(long)))) d;

d fn2() {
  long c;
  d f;

  // Inlined code of fn1
  c = 0;
  f = {c};

  return f;
}

int main() {
  return 0;
}