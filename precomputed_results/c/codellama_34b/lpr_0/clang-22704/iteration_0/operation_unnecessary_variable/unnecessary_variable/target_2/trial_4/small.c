
int d;
int e;
int fn1() {
  if (e)
    goto i;
  fn1();
i:
  d = 6L;
  fn1();
}
int main() {}
