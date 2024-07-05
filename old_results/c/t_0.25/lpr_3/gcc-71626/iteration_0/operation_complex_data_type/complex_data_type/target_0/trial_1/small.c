long fn1() {}

long* fn2() {
  long c = fn1();
  static long f[2];
  f[0] = c;
  f[1] = 0;
  return f;
}

int main() {}