fn1() {}

long fn2() {
  long c = (long)fn1;
  long f[1] = {c};
  return f[0];
}

main() {}
