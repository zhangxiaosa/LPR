int fd;

char fn1() {
  if (0)
    goto i;
  if (0)
    goto i;

  fd = 6L;
  if (0)
    goto i;

  return 0;
}

int main() {}
