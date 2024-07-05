
int d;
int e;
int fn1(int *h) {
  d = *h;
  fn1(h);
  return 0xEEACFBBFL;
}
int main() {}
