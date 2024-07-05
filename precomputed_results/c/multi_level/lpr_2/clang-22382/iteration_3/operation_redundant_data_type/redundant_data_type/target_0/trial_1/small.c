static int fn1(int p5) {
  // Removed: p5.k;

  // Removed: Infinite loop with 'goto w;'

  // Modified return type from 'struct h' to 'int'
}
int fn2() {
  // Removed: struct h p;
  
  fn1(0);
  for (;;) {
    int r1;
    int p = r1 = 0;
  }
}
int main() {}