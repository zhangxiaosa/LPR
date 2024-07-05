char fn2(char p1, int p2) { return p1; }

int d_temp;
int temp_u;
int fn11() {
  d_temp = 2L;
  temp_u = u;
  for (; temp_u < 51; ++temp_u)
    d_temp = fn2(v_0_3 = d_temp, 3) + 0x9EE7F9D1C772505BLL;
  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", v_0_3);
  return 0;
}