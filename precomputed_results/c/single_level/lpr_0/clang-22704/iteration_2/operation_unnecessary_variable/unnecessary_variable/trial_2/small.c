int d;
int fn1() {
  if (0) {
    d = 6L;
    fn1();
    return 0xEEACFBBFL;
  } else {
    fn1();
    return 0xEEACFBBFL;
  }
}
int main() {}