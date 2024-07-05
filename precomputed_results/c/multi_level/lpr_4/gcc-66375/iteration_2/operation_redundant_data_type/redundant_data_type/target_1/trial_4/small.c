int u_0;
int v_0_3;

int fn11() {
  int d_temp = 2L;
  int d = (int)d_temp;

  for (; u_0 < 51; ++u_0) {
    d_temp = fn2(v_0_3 = d_temp, 3) + 0x9EE7F9D1C772505BLL;
    d = (int)d_temp;
  }

  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", u_0);
  return 0;
}