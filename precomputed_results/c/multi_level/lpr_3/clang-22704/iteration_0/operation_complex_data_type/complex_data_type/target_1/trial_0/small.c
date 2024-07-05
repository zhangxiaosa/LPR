int fd;
int fe;

unsigned char fn1() {
  unsigned int h = 6L;
  if (fe)
    goto i;
  fn1();
  unsigned char j;
  return j;
i:
  fd = h;
  fn1();
  j = 0xEE;
  return j;
}

int main() {}.