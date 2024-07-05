int main() {
  int v_0_3;
  int d_temp = 2;
  int temp_u = 0;

  // First iteration
  v_0_3 = d_temp;
  v_0_3 += 0x9EE7F9D1C772505BLL;
  temp_u += 1;

  // Second iteration
  v_0_3 = d_temp;
  v_0_3 += 0x9EE7F9D1C772505BLL;
  temp_u += 1;

  // Third iteration
  v_0_3 = d_temp;
  v_0_3 += 0x9EE7F9D1C772505BLL;
  temp_u += 1;

  printf("checksum = %X\n", v_0_3);
  return 0;
}