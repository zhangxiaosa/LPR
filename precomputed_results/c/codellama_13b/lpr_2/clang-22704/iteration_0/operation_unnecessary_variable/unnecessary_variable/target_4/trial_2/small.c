
int main() {
  long d;
  long fn1() {
    if (d)
      goto i;
    fn1();
    return 0;
  }
  i:
    d = 6L;
    fn1();
    return 0;
}
