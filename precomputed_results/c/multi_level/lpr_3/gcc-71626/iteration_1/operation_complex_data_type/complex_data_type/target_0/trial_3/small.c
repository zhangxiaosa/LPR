typedef long d_element;
typedef d_element d[sizeof(long)];

d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}

int main() {
  // Program body
  return 0;
}