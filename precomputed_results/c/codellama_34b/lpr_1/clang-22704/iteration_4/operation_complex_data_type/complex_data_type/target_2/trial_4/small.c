
<SYS>

int e;
int temp;
int *h;

int fn1(int *h) {
  if (e) {
    temp = 0xEEACFBBFL;
    *h = temp;
    fn1(h);
    return temp;
  }
  fn1(h);
  return 0xEEACFBBFL;
}

int main() {
  h = &e;
  fn1(h);
  return 0;
}

</SYS>
