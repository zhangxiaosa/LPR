
int d;
int e;
int fn1(int *h) {
  if (e) {
    d = *h;
    fn1(h);
    return 0xEEACFBBFL;
  } else {
    fn1(h);
    fn1(h);
    return 0xEEACFBBFL;
  }
}
int main() {}
