struct {
  int d;
  int e;
} f;

char fn1() {
  int h = 6L;
  if (f.e) {
    f.d = 6L;
    fn1();
    return 0xEEACFBBFL;
  } else {
    fn1();
    return 0;
  }
}

int main() {}.