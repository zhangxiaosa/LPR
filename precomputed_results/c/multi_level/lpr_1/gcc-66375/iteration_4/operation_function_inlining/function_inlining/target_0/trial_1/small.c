int main() {
  int d_ = 2;
  int u = 0;

  v0_3 = d_;
  d_ = (char)v0_3 + 0x9EE7F9D1C772505B;
  v0_3 = d_;
  d_ = (char)v0_3 + 0x9EE7F9D1C772505B;
  // Repeat the above two lines for 49 more iterations

  printf("checksum = %X\n", v0_3);
  return 0;
}