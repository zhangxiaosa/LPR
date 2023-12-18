int fd;

char fn1() {
  {
    fd = 6L;
    fn1();
    return 0;
  }
  fn1();
  return 0;
}

int main() {
  return 0;
}