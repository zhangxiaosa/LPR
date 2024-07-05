typedef long a;

void fn1() {}

typedef long __attribute__((__vector_size__(sizeof(long)))) d;

d fn2() {
  long c = (long)fn1;
  long f_0 = c;
  d f = {f_0};
  return f;
}

void main() {}.