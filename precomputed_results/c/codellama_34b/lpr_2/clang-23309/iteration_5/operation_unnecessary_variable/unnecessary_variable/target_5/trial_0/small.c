
int fn2(int p1, int p2) { return p1 - p2; }
int v_int;
short w;
unsigned ac = 1;
int main() {
  w = 0;
  int temp = w - 1;
  v_int = fn2(temp, temp) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
