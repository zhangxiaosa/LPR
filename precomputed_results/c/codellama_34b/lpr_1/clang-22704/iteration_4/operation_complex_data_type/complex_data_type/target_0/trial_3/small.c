
int e;
int h_value;
int fn1_result;
int *fn1_ptr;

int fn1(int *h) {
  if (e) {
    h_value = 0xEEACFBBFL;
    fn1_result = 0xEEACFBBFL;
    fn1_ptr = h;
    return fn1_result;
  }
  fn1_result = 0xEEACFBBFL;
  fn1_ptr = h;
  return fn1_result;
}

int main() {
  h_value = 0;
  fn1_result = 0;
  fn1_ptr = &h_value;
  fn1(fn1_ptr);
  return 0;
}
