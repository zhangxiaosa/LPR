int fd;
int fe;

char fn1() {
  int h = 6L;
  if (fe)
    goto i;
  fn1();
  char j;
  return j;
i:
  fd = h;
  fn1();
  j = 0xEEACFBBF;
  return j;
}

int main() {}