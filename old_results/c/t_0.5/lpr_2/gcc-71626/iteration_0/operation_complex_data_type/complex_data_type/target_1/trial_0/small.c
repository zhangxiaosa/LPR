typedef long a;

void fn1() {}

typedef long __attribute__((__vector_size__(sizeof(long)))) d;

d fn2() {
  long c = 42; // Assign a constant value to c
  d f = {c};
  return f;
}

void main() {}