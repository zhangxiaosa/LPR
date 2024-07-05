
int fn2(int p1, int p2) { return p1 - p2; }
int main() {
  short an;
  an = 0x294A;
  int temp = 0xBCD2 - (1 - an);
  v_int = fn2(temp, 1) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
