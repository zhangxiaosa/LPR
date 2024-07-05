struct {
  int e;
} f;

char fn1() {
  int h = 6L;
  if (f.e) {
    fn1();
    return 0xEEACFBBFL;
  } else {
    fn1();
    return 0;
  }
}

int main() {}
