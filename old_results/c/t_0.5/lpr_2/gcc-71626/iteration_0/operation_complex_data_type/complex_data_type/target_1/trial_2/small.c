typedef long a;

void fn1() {}

typedef long d_element;
const int d_size = sizeof(long);

d_element fn2() {
  long c = fn1;
  d_element f[d_size] = {c};
  return f[0];
}

void main() {}.