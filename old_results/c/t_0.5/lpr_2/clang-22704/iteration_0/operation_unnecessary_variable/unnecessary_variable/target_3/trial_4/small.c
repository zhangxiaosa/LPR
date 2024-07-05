struct {
  int d;
  int e;
} f;

char fn1() {
  int h = 6L;
  if (f.e) {
    f.d = 6L;
    fn1();
    char j = 0xEEACFBBFL;
    return j;
  } else {
    fn1();
    return;
  }
}

int main() {}.