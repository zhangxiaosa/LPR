typedef long a;

void fn1() {}

typedef long __attribute__((__vector_size__(sizeof(long)))) d;

d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}

void main() {
  d f = fn2();
  long f1 = f[0];
  long f2 = f[1];
  long f3 = f[2];
  // Add more variables for each element of the vector if needed
}