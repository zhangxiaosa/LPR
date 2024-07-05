
int fn1(int *h) {
  if (e) {
    *h = 0xEEACFBBFL;
    return 0xEEACFBBFL;
  }
  return 0xEEACFBBFL;
}

int main() {
  int h = 0;
  fn1(&h);
}
