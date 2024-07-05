
int fn2(int p1, int p2) { return p1 - p2; }
int main() {
  int temp = 1 - 0x294A;
  int v_int = fn2(temp);
  printf("checksum = %d\n", v_int);
  return 0;
}
