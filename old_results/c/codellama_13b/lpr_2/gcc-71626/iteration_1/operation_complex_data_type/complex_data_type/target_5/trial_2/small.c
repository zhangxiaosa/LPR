
int fn1() {}
int fn2() {
  int (*f)() = fn1;
  return f;
}
int main() {}
