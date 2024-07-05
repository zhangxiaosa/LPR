int fn4(int p1, int p2) { return p1 + p2; }

int u;
int v_0_3;

int fn11() {
  int d = 2L;
  for (; u < 51; ++u)
    d = fn4(v_0_3 = d, 0x9EE7F9D1C772505BLL);
  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", v_0_3);
  return 0;
}