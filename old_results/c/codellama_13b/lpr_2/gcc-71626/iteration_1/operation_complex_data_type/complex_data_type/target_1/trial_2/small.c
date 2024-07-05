c
typedef long d_vector[sizeof(long)];

d_vector fn1() {}

d_vector fn2() {
  d_vector f = {fn1};
  return f;
}

void main() {}
