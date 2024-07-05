char fn1() {
  if (0) {
    fn1();
    return 0xEEACFBBFL;
  } else {
    f.d = 6L;
    fn1();
    return 0xEEACFBBFL;
  }
}

int main() {
  if (0) {
    fn1();
    return 0xEEACFBBFL;
  } else {
    f.d = 6L;
    fn1();
    return 0xEEACFBBFL;
  }
}