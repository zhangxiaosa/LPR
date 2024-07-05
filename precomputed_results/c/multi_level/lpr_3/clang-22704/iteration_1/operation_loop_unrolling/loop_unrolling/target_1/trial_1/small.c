int fd;
int fe;

char fn1() {
  if (fe) {
    fd = 6L;
    if (fe) {
      fd = 6L;
      if (fe) {
        fd = 6L;
        // Continue unrolling if necessary...
      }
    }
  } else {
    fn1();
  }

  return 0;
}

int main() {
}
