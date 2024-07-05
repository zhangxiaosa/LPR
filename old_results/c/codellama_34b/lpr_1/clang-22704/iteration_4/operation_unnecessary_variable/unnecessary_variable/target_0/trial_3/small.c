
int fn1(int *h) {
  if (0) {
    int temp = 0xEEACFBBFL;
    *h = temp;
    fn1(h);
    return temp;
  }
  fn1(h);
  return 0xEEACFBBFL;
}
int main() {}
