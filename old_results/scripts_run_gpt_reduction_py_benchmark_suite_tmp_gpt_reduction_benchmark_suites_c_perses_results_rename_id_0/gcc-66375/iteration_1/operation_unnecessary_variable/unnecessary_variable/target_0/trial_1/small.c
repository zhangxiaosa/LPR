int u;
int main() {
  int checksum = 2;
  for (; u < 51; ++u) {
    checksum = 2;
    checksum = checksum + 0x9EE7F9D1C772505B;
  }
  printf("checksum = %d\n", 2);
  return 0;
}