typedef long a;
void fn1() {}
typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  a c = 0;
  d f = {0};
  return f;
}
int main() {}