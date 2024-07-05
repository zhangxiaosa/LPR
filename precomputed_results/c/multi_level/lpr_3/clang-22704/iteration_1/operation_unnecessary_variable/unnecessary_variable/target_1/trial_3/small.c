int fd;

char fn1() {
  if (0) {
    fd = 6L;
    fn1();
    return 0;
  }
  fn1();
  return 0;
}

int main() {}
