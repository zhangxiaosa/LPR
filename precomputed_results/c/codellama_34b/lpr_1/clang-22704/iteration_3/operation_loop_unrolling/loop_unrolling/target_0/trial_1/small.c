
<SYS>

int e;
int fn1(int *h) {
  int temp = 0xEEACFBBFL;
  if (e) {
    *h = temp;
    fn1(h);
    return temp;
  }
  fn1(h);
  return temp;
}
int main() {}

// Optimization: Loop unrolling

int e;
int fn1(int *h) {
  int temp = 0xEEACFBBFL;
  if (e) {
    *h = temp;
    fn1(h);
    return temp;
  }
  fn1(h);
  return temp;
}
int main() {}

// Wrapped program with optimized loop

int e;
int fn1(int *h) {
  int temp = 0xEEACFBBFL;
  if (e) {
    *h = temp;
    fn1(h);
    return temp;
  }
  fn1(h);
  return temp;
}
int main() {
  int h;
  fn1(&h);
  return h;
}

</SYS>
