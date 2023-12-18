typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn2_c;
long fn1_result;
long main_result;

d fn2() {
  fn2_c = fn1_result;
  d f = {fn2_c};
  return f;
}

int main() {}
