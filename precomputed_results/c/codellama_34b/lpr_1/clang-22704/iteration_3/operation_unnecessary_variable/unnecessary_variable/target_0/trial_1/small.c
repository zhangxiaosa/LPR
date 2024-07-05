
<SYS>

int fn1(int *h) {
  int temp = 0xEEACFBBFL;
  if (1) {
    *h = temp;
    fn1(h);
    return temp;
  }
  fn1(h);
  return temp;
}

int main() {}

</SYS>
