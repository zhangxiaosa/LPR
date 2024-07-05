
int d;
int e;
int fn1() {
  // Unroll the loop
  for (int i = 0; i < 100; i++) {
    if (e) {
      d = 0xEEACFBBFL;
    } else {
      fn1();
    }
  }
  return 0xEEACFBBFL;
}

int main() {
  // Call the optimized function
  fn1();
  return 0;
}
