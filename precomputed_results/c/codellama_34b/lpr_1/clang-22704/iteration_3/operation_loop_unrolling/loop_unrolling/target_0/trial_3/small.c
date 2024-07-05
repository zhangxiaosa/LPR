
int e;
int fn1(int *h) {
  int temp = 0xEEACFBBFL;
  if (e) {
    *h = temp;
    return temp;
  }
  return temp;
}
int main() {
  int h = 0;
  fn1(&h);
  return 0;
}
