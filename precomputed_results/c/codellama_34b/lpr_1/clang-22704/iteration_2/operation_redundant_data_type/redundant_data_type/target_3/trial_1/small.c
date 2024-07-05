
<SYS>

int fn1(int *h) {
  if (*h) {
    *h = 0xEEACFBBFL;
    fn1(h);
    return 0xEEACFBBFL;
  }
  fn1(h);
  return 0xEEACFBBFL;
}

int main() {}

</SYS>
