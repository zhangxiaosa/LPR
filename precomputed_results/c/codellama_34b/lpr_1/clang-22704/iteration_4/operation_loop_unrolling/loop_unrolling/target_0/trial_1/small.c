
<SYS>

int e;
int fn1(int *h) {
  if (e) {
    *h = 0xEEACFBBFL;
    fn1(h);
    return 0xEEACFBBFL;
  }
  fn1(h);
  return 0xEEACFBBFL;
}
int main() {}

// Optimized program with loop unrolling

int e;
int fn1(int *h) {
  if (e) {
    *h = 0xEEACFBBFL;
    fn1(h);
    return 0xEEACFBBFL;
  }
  fn1(h);
  return 0xEEACFBBFL;
}

int main() {
  int i, j;
  int h[2];

  // Unrolled loop
  for (i = 0; i < 2; i++) {
    h[i] = 0xEEACFBBFL;
    fn1(&h[i]);
  }

  return 0;
}

</SYS>
