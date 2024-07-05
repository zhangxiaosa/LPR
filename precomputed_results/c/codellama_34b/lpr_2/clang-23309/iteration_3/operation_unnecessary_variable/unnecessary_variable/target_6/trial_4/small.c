
int fn2(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
int t = 1 || 0x294A == 0x294A85636008822D;
if (fn2(1 - fn4(1 - 0x294A, 0xECL), t) & 1)
  v_int = 1;
int main() {
  printf("checksum = %d\n", v_int);
  return 0;
}
