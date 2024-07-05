typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c;
  // Inlined body of fn1()
}

int main() {
  return 0;
}