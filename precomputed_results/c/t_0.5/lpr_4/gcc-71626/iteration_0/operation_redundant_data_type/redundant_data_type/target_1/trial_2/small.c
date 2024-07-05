long fn2() {
  long c = (long)fn1;
  long f = (long)c;
  return f;
}

main() {
  long f = fn2();
}