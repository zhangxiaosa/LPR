int f_d;
int f_e;
char fn1() {
  if (f_e) {
    f_d = 6L;
    fn1();
    return 0xEEACFBBF;
  }
  else {
    fn1();
    return 0xEEACFBBF;
  }
}
int main() {}
