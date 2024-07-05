
int fn1(int *h) {
  if (1) {
    int temp = 0xEEACFBBFL;
    *h = temp;
    fn1(h);
    return temp;
  }
  fn1(h);
  return 0xEEACFBBFL;
}
int main() {}
