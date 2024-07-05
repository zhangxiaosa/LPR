c
int fn2(int p1, int p2) {
  return p1 - p2;
}

int main() {
  short an = 0x294A;
  short w = 0xBCD1;
  int temp = w - (1 - an);
  int v_int = fn2(temp, 0);
  printf("checksum = %d\n", v_int);
  return 0;
}
