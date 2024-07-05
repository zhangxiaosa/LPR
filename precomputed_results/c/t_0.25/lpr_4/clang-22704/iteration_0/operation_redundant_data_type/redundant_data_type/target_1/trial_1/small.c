int f;
int fn1() {
  int h = 6L;
  if (f) {
    f = h;
    fn1();
    int j = 0xEEACFBBFL;
    return j;
  } else {
    fn1();
    int j;
    return j;
  }
}

void main() {}