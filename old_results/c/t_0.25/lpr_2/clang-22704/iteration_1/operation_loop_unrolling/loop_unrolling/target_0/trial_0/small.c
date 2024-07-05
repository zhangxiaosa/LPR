int f;

int fn1() {
  // Unrolled loop iteration 1
  f = 6L;
  fn1();
  return 0xEEACFBBFL;

  // Unrolled loop iteration 2
  f = 6L;
  fn1();
  return 0xEEACFBBFL;

  // Unrolled loop iteration 3
  f = 6L;
  fn1();
  return 0xEEACFBBFL;

  // ... continue unrolling as needed
}

int main() {}
