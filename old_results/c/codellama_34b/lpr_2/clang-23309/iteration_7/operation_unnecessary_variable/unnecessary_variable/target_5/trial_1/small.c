
int main() {
  int v_int = 0xBCD1 - (1 - 0x294A) - 1 & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
