typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c;
  d f;
  c = 0; // Replace the function call `fn1` with its body
  f = {c};
  return f;
}

int main() {
  return 0;
}