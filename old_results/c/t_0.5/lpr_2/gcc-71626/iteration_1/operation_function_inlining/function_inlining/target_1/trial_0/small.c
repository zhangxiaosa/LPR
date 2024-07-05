typedef long __attribute__((__vector_size__(sizeof(long)))) d;

main() {
  long c = fn1;
  d f = {c};
  return f;
}