char fn2(char p1, int p2) { return p1; }

int fn4(int p1, int p2) { return p1 + p2; }

int u;
int v_0_3;

int fn11() {
  for (; u < 51; ++u)
    v_0_3 = fn4(d, 0x9EE7F9D1C772505BLL);
  return 0;
}

int main() {
  int d = 2L;
  fn11();
  printf("checksum = %X\n", v_0_3);
  return 0;
}
