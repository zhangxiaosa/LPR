typedef short int8_t;
typedef unsigned uint64_t;
void platform_main_end(crc, val) { printf("checksum = %X\n", crc); }
int8_t safe_rshift_func_int8_t_s_s(left, ui2) { return left; }
uint64_t safe_add_func_uint64_t_u_u(ui1, left) { return ui1 + left; }
uint64_t left;
void crc32_byte(b) { left = b; }
void transparent_crc(uint64_t left, char *vname, int uint64_t) {
  crc32_byte(left);
}
uint64_t g_1729[1][4];
uint64_t func_1() {
  uint64_t l_2124 = 2L;
  for (; left < 51; ++left) {
    uint64_t left[9];
    int uint64_t;
    for (uint64_t = 0; uint64_t < 9; uint64_t++)
      left[uint64_t] = 0x9EE7F9D1C772505BLL;
    l_2124 = safe_add_func_uint64_t_u_u(
        safe_rshift_func_int8_t_s_s(g_1729[0][3] = l_2124, 3), left[0]);
  }
  return 3;
}
int main() {
  int uint64_t;
  int print_hash_value = func_1();
  for (uint64_t = 0; uint64_t < 1; uint64_t++)
    transparent_crc(g_1729[uint64_t][print_hash_value], "g_1729[i][j]",
                    uint64_t);
  platform_main_end(left, uint64_t);
  return 0;
}
