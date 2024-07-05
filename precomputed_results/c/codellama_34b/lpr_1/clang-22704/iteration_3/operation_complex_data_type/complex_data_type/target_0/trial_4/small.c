
int e;
int temp1 = 0xEEACFBBFL;
int temp2;
int fn1(int *h) {
  if (e) {
    *h = temp1;
    return temp1;
  }
  *h = temp2;
  return temp2;
}
int main() {
  int h = 0;
  fn1(&h);
}
