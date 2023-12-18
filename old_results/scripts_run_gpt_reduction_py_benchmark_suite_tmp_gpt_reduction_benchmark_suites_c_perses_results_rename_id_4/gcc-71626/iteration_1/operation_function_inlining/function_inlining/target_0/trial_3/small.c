typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c; // Inline the body of fn1:
  d f = {c};
  return f;
}

int main() {}