
uint32_t fn2(uint32_t p1, uint16_t p2) { return p1 - p2; }
uint32_t fn6(uint32_t p1, uint16_t p2) { return p2; }
uint16_t w;
uint16_t ac = 1;
uint32_t fn10(uint16_t p2) {
  uint16_t an = 250;
  p2 = ac || (an = w) == 0x294A85636008822D;
  return fn2((uint16_t)0xBCD1 - (fn6(1, an) & 1) << 8, p2) & 1;
}
int main() {
  printf("checksum = %X\n", fn10(0));
  return 0;
}
