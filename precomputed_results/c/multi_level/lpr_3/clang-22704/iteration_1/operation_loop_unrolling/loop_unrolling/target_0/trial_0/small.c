int fd;
int fe;

char fn1() {
  if (fe) {
    if (fe) {
      if (fe) {
        if (fe) {
          fn1();
        } else {
          fd = 6L;
          fn1();
        }
      } else {
        fd = 6L;
        fn1();
      }
    } else {
      fd = 6L;
      fn1();
    }
  } else {
    fd = 6L;
    fn1();
  }
  return 0;
}