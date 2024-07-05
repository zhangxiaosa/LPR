int d;

char fn1() {
  if (0) {
    d = 6L;
    fn1();
    return 0xEEACFBBFL;
  } else {
    fn1();
    char j;
    return j;
  }
}

int main() {}
