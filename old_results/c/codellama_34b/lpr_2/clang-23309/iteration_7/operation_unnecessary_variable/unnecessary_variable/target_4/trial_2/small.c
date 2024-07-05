
int main() {
  int checksum = 0xBCD1 - 0x294A & 1;
  printf("checksum = %d\n", checksum);
  return 0;
}
