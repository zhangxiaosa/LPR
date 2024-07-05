unsigned fn2() {
  // Variable r0 is optimized out
  return 0;
}

int main() {
  fn2();
}