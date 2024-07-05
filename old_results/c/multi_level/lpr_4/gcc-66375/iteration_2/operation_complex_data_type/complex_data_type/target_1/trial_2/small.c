char fn2(char p1, int p2) {
  return p1;
}

int v_0_3;
int v_0_3_decomposed = 0;

int fn11() {
  int d_temp = 2L;
  int temp_u = 0;

  for (; temp_u < 51; ++temp_u) {
    v_0_3_decomposed = d_temp; // Store the value of d_temp in the decomposed variable
    d_temp = fn2(v_0_3_decomposed, 3) + 0x9EE7F9D1C772505BLL;
  }

  v_0_3 = v_0_3_decomposed; // Assign the value of decomposed variable back to v_0_3

  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", v_0_3);
  return 0;
}