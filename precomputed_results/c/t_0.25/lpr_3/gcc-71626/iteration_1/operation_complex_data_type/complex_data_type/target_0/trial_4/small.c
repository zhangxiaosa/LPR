long fn1_value;

long fn2() {
  long c = fn1_value;
  long f = c;
  return f;
}

int main() {
  fn1_value = fn1();
  return 0;
}