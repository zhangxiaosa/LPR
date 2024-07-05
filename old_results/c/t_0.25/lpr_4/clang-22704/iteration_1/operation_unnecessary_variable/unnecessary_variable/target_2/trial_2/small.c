int d;
int e;
char fn1() {
  if (e) {
    d = 6L;
    fn1();
    return 0xEEACFBBFL;
  } else {
    fn1();
    return 0;
  }
}
int main() {}
