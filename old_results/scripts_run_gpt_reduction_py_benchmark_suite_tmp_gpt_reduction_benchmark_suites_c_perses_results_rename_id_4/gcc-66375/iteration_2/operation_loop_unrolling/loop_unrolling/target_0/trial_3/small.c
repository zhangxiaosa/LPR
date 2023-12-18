char fn2(char p1, int p2) { return p1; }

int u;
int v_0_3;
int fn11() {
  int d = 2L;
  for (; u < 51; u += 3) {
    v_0_3 = d;
    d = fn2(v_0_3, 3) + 0x9EE7F9D1C772505BLL;

    v_0_3 = d;
    d = fn2(v_0_3, 3) + 0x9EE7F9D1C772505BLL;

    v_0_3 = d;
    d = fn2(v_0_3, 3) + 0x9EE7F9D1C772505BLL;
  }
  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", v_0_3);
  return 0;
}