typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = 0;  // Replace fn1 call with the actual code of fn1
  d f = {c};
  return f;
}

int main() {
  // The main function is left unchanged
  return 0;
}