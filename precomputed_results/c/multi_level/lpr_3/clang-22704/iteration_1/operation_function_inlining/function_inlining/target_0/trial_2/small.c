int fd;
int fe;

int main() {
  if (fe)
    goto i;
  // inline version of fn1
  if (fe)
    goto i;
  // inline version of fn1
  if (fe)
    goto i;
  // inline version of fn1
  if (fe)
    goto i;
  i:
  fd = 6L;
  // inline version of fn1
  if (fe)
    goto i;
  // inline version of fn1
  if (fe)
    goto i;
  // end of inline version
  return 0;
}