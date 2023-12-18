int fd;
char fn1() {
  if (fe) {
    fd = 6L;
    return fn1();
  }
  return fn1();
}
int main() {}
