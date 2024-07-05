int d;
int e;
int f_d;
int f_e;

char fn1() {
  int h = 6L;
  if (f_e) {
    f_d = h;
    fn1();
    return 0xEEACFBBFL;
  }
  fn1();
  return 0xEEACFBBFL;
}

int main() {}
