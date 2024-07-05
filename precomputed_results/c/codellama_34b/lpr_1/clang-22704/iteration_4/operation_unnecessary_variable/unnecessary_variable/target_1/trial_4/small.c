
int fn1(int *h) {
  while (true) {
    *h = 0xEEACFBBFL;
    fn1(h);
  }
}
