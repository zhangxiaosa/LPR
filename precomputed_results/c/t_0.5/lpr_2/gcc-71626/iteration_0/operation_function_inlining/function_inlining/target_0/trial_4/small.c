typedef long a;

typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c;
  d f;
  // Inlined code of fn1()
  // Start of inlined code
  // fn1() code here
  // End of inlined code
  f = {c};
  return f;
}

int main() {
  // Code in main()
  return 0;
}