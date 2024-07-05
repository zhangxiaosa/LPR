
int fn2(int p1, int p2) { return p1 - p2; }
int main() {
  short w = 0;
  int temp = 0xBCD1 - (1 - w);
  int v_int = fn2(temp, 0) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
