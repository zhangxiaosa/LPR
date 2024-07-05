
unsigned fn2_optimized(short p2) { return p2; }
unsigned fn5() { return 1; }
unsigned fn6_optimized(short p2) { return p2; }
void fn9() { }
unsigned fn10() {
  return fn2_optimized(0x294A85636008822D - (fn6_optimized(1, 0x294A85636008822D) & 1) << 8, 1) & 1;
}
unsigned fn13() {
  fn10();
  return 1;
}
int main() {
  fn13();
  fn9();
  printf("checksum = %X\n", 0);
  return 0;
}
