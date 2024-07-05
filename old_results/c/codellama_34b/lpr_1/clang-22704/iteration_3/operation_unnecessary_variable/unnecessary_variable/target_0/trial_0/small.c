
int fn1(int *h) {
  int temp = 0xEEACFBBFL;
  if (true) {
    *h = temp;
    fn1(h);
    return temp;
  }
  fn1(h);
  return temp;
}

int main() {
  int h = 0;
  fn1(&h);
  return 0;
}
