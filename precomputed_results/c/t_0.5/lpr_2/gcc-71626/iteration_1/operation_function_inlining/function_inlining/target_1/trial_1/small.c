typedef long __attribute__((__vector_size__(sizeof(long)))) d;
void fn1() {}

int main() {
  long c = fn1;
  d f = {c};
  return 0;
}