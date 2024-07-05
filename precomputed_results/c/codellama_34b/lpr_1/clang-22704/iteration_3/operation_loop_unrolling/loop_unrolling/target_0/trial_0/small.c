
<SYS>
int e;
int fn1(int *h) {
  int temp = 0xEEACFBBFL;
  if (e) {
    *h = temp;
    return temp;
  }
  return temp;
}
int main() {
  int h = 0;
  for (int i = 0; i < 100; i++) {
    h = fn1(&h);
  }
  return h;
}
