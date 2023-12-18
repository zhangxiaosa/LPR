typedef long a;

void fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c;
  d f = {(a)0};
  return f;
}

int main() {}
