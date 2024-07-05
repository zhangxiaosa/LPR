int d;
int e;

char fn1() {
  if (e) {
    goto i;
  }
  // Loop unrolling
  fn1();
  fn1();
  fn1();
  fn1();
  fn1();

  return 0xEEACFBBFL;

i:
  d = 6L;
  // Loop unrolling
  fn1();
  fn1();
  fn1();
  fn1();
  fn1();

  return 0xEEACFBBFL;
}

int main() {
  // Main function is empty
  return 0;
}