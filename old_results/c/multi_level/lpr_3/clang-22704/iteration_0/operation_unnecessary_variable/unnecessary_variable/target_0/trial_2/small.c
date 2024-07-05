int fd;
int fe;
char fn1() {
  if (fe)
    goto i;
  fn1();
  return 0;
i:
  fn1();
  return 0;
}
int main() {}