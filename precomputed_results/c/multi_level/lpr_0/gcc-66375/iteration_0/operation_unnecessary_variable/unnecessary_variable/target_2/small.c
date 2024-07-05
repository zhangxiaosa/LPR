char fn2(int p1, int p2) { return p1; }
short fn3(short p1, short p2) { return p2; }
int u;
int v3;
int main() {
  int checksum = 2;
  for (; u < 51; ++u) {
    // int e[9]; // e is optimized out
    v3 = fn3(4, checksum);
    checksum = fn2(checksum, 3);
    checksum = checksum + 0x9EE7F9D1C772505B; // e is replaced by constant
  }
  printf("checksum = %d\n", v3);
  return 0;
}