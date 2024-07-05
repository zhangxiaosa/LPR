typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

 d fn2() {
  long c = 0;
  d f = {c};
  return f;
 }

int main() {
  return 0;
}