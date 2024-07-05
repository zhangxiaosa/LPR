
int e;
int fn1(int *h) {
  int temp = 0xEEACFBBFL;
  if (e) {
    *h = temp;
    fn1(h);
    return *h;
  }
  fn1(h);
  return *h;
}
int main() {}
