struct {
  int d;
  int e;
} f;
char fn1() {
  int h = 6L;
  if (0) {
    f.d = 6L;
    fn1();
    char j = 0xEEACFBBFL;
    return j;
  } else {
    fn1();
    char j;
    return j;
  }
}
int main() {}.