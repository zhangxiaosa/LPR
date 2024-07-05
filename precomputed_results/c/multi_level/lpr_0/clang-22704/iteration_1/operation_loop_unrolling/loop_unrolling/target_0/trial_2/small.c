int f_d;
int f_e;

char fn1() {
  if (f_e) {
    fn1();
    fn1();
    return 0xEEACFBBFL;
  } else {
    fn1();
    fn1();
    fn1();
    fn1();
    return 0xEEACFBBFL;
  }
}

int main() {}
