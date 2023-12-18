int fd;
int fe;

char fn1() {
  if (fe) {
    fd = 6L;
    fn1();
    fd = 6L;
    fn1();
  }
  return 0;
}

int main() {
  for (int i = 0; i < 2; i++) {
    fn1();
  }
}