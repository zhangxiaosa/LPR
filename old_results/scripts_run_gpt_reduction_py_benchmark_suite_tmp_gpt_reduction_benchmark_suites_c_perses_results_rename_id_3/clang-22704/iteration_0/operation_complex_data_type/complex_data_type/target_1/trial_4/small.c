int fd;
int fe;

char fn1() {
  int h = 6;

  if (fe != 0) {
    goto i;
  }

  fn1();

  char j;
  return j;

i:
  fd = h;

  fn1();

  j = (char)0xBF;
  return j;
}

int main() {
  return 0;
}