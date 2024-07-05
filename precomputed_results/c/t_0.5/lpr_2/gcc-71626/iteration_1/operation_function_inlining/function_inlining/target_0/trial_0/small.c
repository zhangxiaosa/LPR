typedef long __attribute__((__vector_size__(sizeof(long)))) d;

d fn2() {
  long c;
  d f = {c};
  return f;
}

int main() {
  return 0;
}