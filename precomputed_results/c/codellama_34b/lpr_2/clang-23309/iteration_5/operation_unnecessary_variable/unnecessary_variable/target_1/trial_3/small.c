
int fn2(int p1, int p2) {
  return p1 - p2;
}

int main() {
  short an = 0x294A;
  short w = 0;
  w = 0;
  an = 0x294A;
  int v_int;
  short ao = 0xBCD1;
  int temp = ao - (1 - an);
  v_int = fn2(temp, 0) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
