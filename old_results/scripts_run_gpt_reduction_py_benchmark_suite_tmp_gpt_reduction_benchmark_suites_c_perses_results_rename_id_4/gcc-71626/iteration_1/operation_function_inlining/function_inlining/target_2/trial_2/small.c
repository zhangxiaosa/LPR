typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

int main() {
  long c = (long)&fn1;
  d f = {c};
  return 0;
}