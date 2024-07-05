
<SYS>

// Optimized program with loop unrolling

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
  // Loop unrolling
  for (int i = 0; i < 5; i++) {
    fn1(h);
  }
  return 0;
}

</SYS>
