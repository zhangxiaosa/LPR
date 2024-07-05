int main() {
  int v_0_3;
  int d_temp = 2L;
  int temp_u = 0;

  // Unrolled loop
  for (; temp_u < 51; temp_u += 4) {
    d_temp = (char)(v_0_3 = d_temp) + 0x9EE7F9D1C772505BLL;  // Iteration 1
    d_temp = (char)(v_0_3 = d_temp) + 0x9EE7F9D1C772505BLL;  // Iteration 2
    d_temp = (char)(v_0_3 = d_temp) + 0x9EE7F9D1C772505BLL;  // Iteration 3
    d_temp = (char)(v_0_3 = d_temp) + 0x9EE7F9D1C772505BLL;  // Iteration 4
  }

  printf("checksum = %X\n", v_0_3);
  return 0;
}