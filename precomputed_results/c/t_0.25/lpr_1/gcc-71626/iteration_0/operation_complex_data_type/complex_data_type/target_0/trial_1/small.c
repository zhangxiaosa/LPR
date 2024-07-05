long c;
long f[1];

long fn1() {}

long* fn2() {
  long c = fn1();
  long f[1] = {c};
  return f;
}

int main() {}
