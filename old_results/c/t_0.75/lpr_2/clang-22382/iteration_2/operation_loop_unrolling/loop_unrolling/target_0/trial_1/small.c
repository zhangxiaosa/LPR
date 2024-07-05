unsigned fn2(p1) {
  struct h p;
  fn1(0, 0, p1, 3, p);

  struct h r1;
  p = r1 = p;

  struct h r2;
  p = r2 = p;

  struct h r3;
  p = r3 = p;

  // Repeat the above lines as needed

  // Rest of the program
}
int main() {}
