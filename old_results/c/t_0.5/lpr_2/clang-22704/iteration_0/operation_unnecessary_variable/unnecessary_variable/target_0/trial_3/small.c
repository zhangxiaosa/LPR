struct {
  int d;
  int e;
} f;
char fn1() {
  int h = 6L;
  if (f.e) {
    fn1();
    char j = 0xEEACFBBFL;
    return j;
  } else {
    fn1();
    return 0;
  }
}
int main() {}
