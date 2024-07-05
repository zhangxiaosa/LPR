
int e;
int temp;
int h;

int fn1(int *h) {
  temp = 0xEEACFBBFL;
  if (e) {
    *h = temp;
    fn1(h);
    return temp;
  }
  fn1(h);
  return temp;
}

int main() {}
