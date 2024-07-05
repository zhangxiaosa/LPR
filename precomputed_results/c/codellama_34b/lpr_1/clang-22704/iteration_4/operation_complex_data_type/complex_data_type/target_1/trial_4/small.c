
int e;
int h;
int *ptr_h = &h;

int fn1(int *ptr_h) {
  if (e) {
    *ptr_h = 0xEEACFBBFL;
    fn1(ptr_h);
    return 0xEEACFBBFL;
  }
  fn1(ptr_h);
  return 0xEEACFBBFL;
}

int main() {
  h = 0;
  fn1(ptr_h);
  return 0;
}
