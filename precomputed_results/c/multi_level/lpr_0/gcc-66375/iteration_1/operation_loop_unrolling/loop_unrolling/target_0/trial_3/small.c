char fn2(int p1, int p2) { return p1; }

int main() {
  int checksum = 2;
  int u = 51;  // Update the loop variable to its final value

  // Unrolled loop body code
  int v3 = checksum;
  checksum = fn2(checksum, 3);
  checksum = checksum + 0x9EE7F9D1C772505B;

  printf("checksum = %d\n", v3);
  return 0;
}