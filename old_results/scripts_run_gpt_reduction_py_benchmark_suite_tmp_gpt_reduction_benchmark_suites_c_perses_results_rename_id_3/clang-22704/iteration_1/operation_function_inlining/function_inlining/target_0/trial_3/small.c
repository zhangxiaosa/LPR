int fd;
int fe;

int main() {
  if (fe)
    goto i;
  // function content of fn1
  if (fe)
    goto i;
  // function content of fn1
  fd = 6L;
  // function content of fn1
  if (fe)
    goto i;
  // function content of fn1
  return 0;
i:
  fd = 6L;
  // function content of fn1
  if (fe)
    goto i;
  // function content of fn1
  return 0;
}
