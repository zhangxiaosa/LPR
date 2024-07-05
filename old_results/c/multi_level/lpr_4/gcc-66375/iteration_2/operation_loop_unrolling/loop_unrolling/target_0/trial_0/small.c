char fn2(char p1, int p2) { return p1; }

int u;
int v_0_3;
int fn11() {
  int d = 2L;
  v_0_3 = d + 0x9EE7F9D1C772505BLL;
  v_0_3 = v_0_3 + 0x9EE7F9D1C772505BLL;
  v_0_3 = v_0_3 + 0x9EE7F9D1C772505BLL;
  // Unroll the loop iterations: repeat the previous line 48 more times
  v_0_3 = v_0_3 + 0x9EE7F9D1C772505BLL;
  v_0_3 = v_0_3 + 0x9EE7F9D1C772505BLL;
  // Repeat for a total of 51 times
  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", v_0_3);
  return 0;
}