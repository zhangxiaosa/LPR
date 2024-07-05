
int f_e;
int fn1() {
  while (true) {
    if (f_e)
      continue;
    fn1();
    return 0xEEACFBBF;
  }
}
int main() {}
