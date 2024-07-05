char fn1() {
  if (0)  // Optimized: Removed the check for f
    goto i;
  fn1();
  char j;
  return j;
i:
  // Optimized: Removed the assignment to f
  fn1();
  j = 0xEEACFBBFL;
  return j;
}
int main() {}
