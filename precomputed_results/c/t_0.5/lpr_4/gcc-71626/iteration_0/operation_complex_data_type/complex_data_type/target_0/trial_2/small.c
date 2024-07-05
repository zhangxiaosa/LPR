long fn1() {}

long fn2() {
  long c = fn1();
  long f[1];
  f[0] = c;
  return f[0];
}

int main() {
  return 0;
}