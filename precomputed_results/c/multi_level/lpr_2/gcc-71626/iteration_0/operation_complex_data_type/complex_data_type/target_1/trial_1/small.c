typedef long d;

d fn2() {
  long c = (long)fn1;
  d f = (d)c;
  return f;
}

int main() {
  return 0;
}