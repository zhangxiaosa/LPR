long fn1() {}

long* fn2() {
  long c = fn1();
  static long f[1];
  f[0] = c;
  return f;
}

int main() {}