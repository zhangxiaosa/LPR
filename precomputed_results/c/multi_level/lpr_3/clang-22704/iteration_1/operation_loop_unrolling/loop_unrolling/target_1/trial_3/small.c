int fd;
int fe;

char fn1() {
  if (fe)
    goto i;
  fn1();
  fn1();
  fn1();
  fn1();
i:
  fd = 6L;
  fn1();
  fn1();
  fn1();
  fn1();
  return 0;
}

int main() {}
