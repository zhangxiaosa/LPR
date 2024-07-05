char fn2(char p1, int p2) { return p1; }
int fn3(int p1, int p2) { return p2; }
int fn4(int p1, int p2) { return p1 + p2; }
int u;
int v_00;
int fn11() {
  int d = 2L;
  for (; u < 51; ++u) {
    int e0 = 0x9EE7F9D1C772505BLL;
    int temp1 = fn3(4L, d);
    int temp2 = fn2(v_00 = temp1, 3);
    int temp3 = fn4(temp2, e0);
    d = temp3;
  }
  return 0L;
}
int main() {
  fn11();
  printf("checksum = %X\n", v_00);
  return 0;
}