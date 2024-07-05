
typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn2() {
  d f = {fn1};
  return f;
}

int main() {
  return 0;
}
