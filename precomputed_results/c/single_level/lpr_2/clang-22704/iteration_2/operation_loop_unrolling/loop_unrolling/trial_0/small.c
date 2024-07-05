int f;
char fn1() {
  while (f) {
    f = 6L;
    fn1();
  }
  return 0xEEACFBBFL;
}

int main() {}
