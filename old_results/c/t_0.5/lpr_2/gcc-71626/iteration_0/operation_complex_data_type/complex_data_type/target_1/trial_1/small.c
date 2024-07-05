typedef long a;

void fn1() {}

typedef long __attribute__((__vector_size__(sizeof(long)))) d;

d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}

void main() {
  long f0, f1, f2, f3, f4, f5, f6, f7;
  d f = fn2();
  f0 = f[0];
  f1 = f[1];
  f2 = f[2];
  f3 = f[3];
  f4 = f[4];
  f5 = f[5];
  f6 = f[6];
  f7 = f[7];
}