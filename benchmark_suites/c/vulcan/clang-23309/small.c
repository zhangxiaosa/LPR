typedef char int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef short uint16_t;
typedef unsigned uint32_t;
typedef unsigned uint64_t;
void platform_main_end(crc, flag) { printf("checksum = %X\n", crc); }
uint8_t safe_sub_func_uint8_t_u_u(ui1, ui2) { return ui1; }
uint32_t safe_sub_func_uint32_t_u_u(ui1, g_332) { return ui1 - g_332; }
uint32_t crc32_context;
int16_t g_332;
uint8_t func_13(uint64_t, uint16_t);
uint8_t func_26(uint8_t, uint32_t, int32_t, uint16_t);
int16_t func_39(int32_t, int32_t, uint8_t, int16_t, uint64_t);
int32_t func_1() {
  uint16_t l_3032 = func_13(g_332, g_332);
  return g_332;
}
uint8_t func_13(uint64_t p_14, uint16_t p_15) {
  func_26(2L, g_332, g_332, 1);
  return g_332;
}
uint8_t func_26(uint8_t p_27, uint32_t p_28, int32_t p_29, uint16_t p_30) {
  uint16_t l_1827 = func_39(g_332, g_332, p_27, 0, p_27);
  return g_332;
}
int16_t func_39(int32_t p_40, int32_t p_41, uint8_t p_42, int16_t p_43,
                uint64_t p_44) {
  int32_t l_1166;
  for (g_332 = 3; g_332; g_332 -= 1)
    if (l_1166 = 250UL) {
      g_332 = p_42 || (l_1166 = g_332) == 0x294A85636008822DLL;
      int16_t l_1196 = 0xBCD1L;
      if (safe_sub_func_uint32_t_u_u(
              safe_sub_func_uint32_t_u_u(
                  l_1196,
                  safe_sub_func_uint8_t_u_u(
                      safe_sub_func_uint32_t_u_u(l_1196, l_1166), 0xECL)),
              g_332) &
          1UL)
        crc32_context = 1UL;
    }
  return g_332;
}
int main() {
  int print_hash_value = func_1();
  platform_main_end(crc32_context, g_332);
  return 0;
}
