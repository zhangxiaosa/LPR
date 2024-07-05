
int fn1(int *h) {
  int temp = 0xEEACFBBFL;
  *h = temp;
  fn1(h);
  return temp;
}

int main() {}
