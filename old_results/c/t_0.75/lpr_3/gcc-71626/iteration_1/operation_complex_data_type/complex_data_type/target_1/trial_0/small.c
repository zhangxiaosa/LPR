typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

long fn2() {
  int c = (int)&fn1;
  d f = {c};
  return f;
}

int main() {}