typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn1_result;
long c;
long f[1];

void fn1() {
  // Function body of fn1
}

long* fn2() {
  fn1();
  c = (long)&fn1;
  f[0] = c;
  return f;
}

int main() {
  // Function body of main
}