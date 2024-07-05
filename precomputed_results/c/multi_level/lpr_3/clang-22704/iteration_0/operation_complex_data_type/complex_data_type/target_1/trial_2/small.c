int fd;
int fe;

unsigned char fn1() {
  int h = 6L;
  if (fe)
    goto i;
  fn1();
  unsigned char j;
  return j;
i:
  fd = h;
  fn1();
  j = (unsigned char)0xEEACFBBF;
  return j;
}

int main() {}
