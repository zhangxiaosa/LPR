char fn2(char p1, int p2) { return p1; }

int u;
int v_0_3;

int fn11() {
  int d = 2L;

  // Unrolled iteration 1
  d = fn2(v_0_3 = d, 3) + 0x9EE7F9D1C772505BLL;
  u++;

  // Unrolled iteration 2
  d = fn2(v_0_3 = d, 3) + 0x9EE7F9D1C772505BLL;
  u++;

  // Unrolled iteration 3
  d = fn2(v_0_3 = d, 3) + 0x9EE7F9D1C772505BLL;
  u++;

  // Unrolled iteration 4
  d = fn2(v_0_3 = d, 3) + 0x9EE7F9D1C772505BLL;
  u++;

  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", v_0_3);
  return 0;
}