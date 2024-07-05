
<SYS>

int e;
int fn1(int *h) {
  int temp;
  if (e) {
    temp = 0xEEACFBBFL;
    *h = temp;
    fn1(h);
    return temp;
  }
  fn1(h);
  return 0xEEACFBBFL;
}
int main() {}

</SYS>

The optimized program is:
