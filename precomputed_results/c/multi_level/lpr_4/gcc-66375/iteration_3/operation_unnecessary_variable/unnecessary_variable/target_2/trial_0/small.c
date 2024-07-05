int main() {
  int d_temp = 2;
  int temp_u = 0;
  for (; temp_u < 51; ++temp_u) {
    d_temp = (char)d_temp + 0x9EE7F9D1C772505BLL;
  }
  printf("checksum = %X\n", d_temp);
  return 0;
}