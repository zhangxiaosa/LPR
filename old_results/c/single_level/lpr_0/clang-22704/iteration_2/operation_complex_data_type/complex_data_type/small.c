int d;
int e;

int fn1() {
  if (e) {
    d = 6L;
    fn1();
    return 0xEEACFBBFL;
  } else {
    fn1();
    return 0xEEACFBBFL;
  }
}

int main() {}
