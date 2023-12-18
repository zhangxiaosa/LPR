char fn2(int p1, int p2) { return p1; }
int u;
int v3;
int main() {
  int checksum = 2;
  v3 = checksum;
  checksum = fn2(checksum, 3);
  checksum = checksum + 0x9EE7F9D1C772505B;
  v3 = checksum;
  checksum = fn2(checksum, 3);
  checksum = checksum + 0x9EE7F9D1C772505B;
  v3 = checksum;
  checksum = fn2(checksum, 3);
  checksum = checksum + 0x9EE7F9D1C772505B;
  // Repeat the above two lines until u reaches 51
  printf("checksum = %d\n", v3);
  return 0;
}