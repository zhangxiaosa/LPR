int f;
char fn1() {
  if (f) {
    f = 6L;
    fn1();
    return 0xEEACFBBFL;
  } else {
    fn1();
    return 0xEEACFBBFL;
  }
}
int main() {}
