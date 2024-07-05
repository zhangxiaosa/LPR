typedef long a;
void fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() {
  a c = 0; // Replaced the function call with the code
  d f = {c};
  return f;
}

int main() {
  return 0;
}
