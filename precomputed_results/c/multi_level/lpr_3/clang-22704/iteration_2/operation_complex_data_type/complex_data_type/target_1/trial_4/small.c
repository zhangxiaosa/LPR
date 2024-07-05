int fd;
int fe;
char result;

char fn1() {
  if (fe != 0) {
    fd = 6;
    result = fn1();
    return 0;
  }
  result = fn1();
  return 0;
}

int main() {}