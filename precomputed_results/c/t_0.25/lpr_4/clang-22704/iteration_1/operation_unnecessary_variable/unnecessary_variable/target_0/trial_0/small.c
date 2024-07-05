int e;
char fn1() {
  if (e) {
    fn1();
    return 0xEEACFBBFL;
  } else {
    fn1();
    char j;
    return j;
  }
}
int main() {}