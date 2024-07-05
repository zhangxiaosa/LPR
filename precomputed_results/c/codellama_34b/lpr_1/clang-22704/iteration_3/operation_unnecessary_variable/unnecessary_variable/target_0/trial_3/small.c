
int fn1(int *h) {
  if (0xEEACFBBFL) {
    *h = 0xEEACFBBFL;
    fn1(h);
    return 0xEEACFBBFL;
  }
  fn1(h);
  return 0xEEACFBBFL;
}
int main() {}
