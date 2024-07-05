
int e = 1;

int fn1(int *h) {
  if (1) {
    *h = 1431655765;
    fn1(h);
    return 1431655765;
  }
  fn1(h);
  return 1431655765;
}

int main() {
  int result = fn1(&e);
  return result;
}
