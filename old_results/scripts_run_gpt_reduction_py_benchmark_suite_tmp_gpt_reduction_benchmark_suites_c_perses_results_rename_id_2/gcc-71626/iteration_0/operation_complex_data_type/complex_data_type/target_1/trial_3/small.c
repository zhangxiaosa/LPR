typedef long d[SIZE];

d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}

int main() {
  return 0;
}