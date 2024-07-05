
fn3(long p1, unsigned p2) { return p1 - p2; }
short fn6(short p1, short p2) { return p1 - p2; }
void fn9(unsigned v, int ap) { printf("checksum = %X\n", v); }
int main() {
  fn9(1, 0);
  return 0;
}
