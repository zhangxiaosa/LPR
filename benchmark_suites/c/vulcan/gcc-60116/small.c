typedef unsigned uint32_t;
typedef long long uint64_t;
signed printf(const char *, ...);
void platform_main_end(crc, ui1) { printf("checksum = %X\n", crc); }
uint64_t safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t crc) {
  return ui1 + crc;
}
uint32_t crc32_context;
void crc32_byte(b) { crc32_context = b; }
void transparent_crc(uint64_t crc, char *vname, int uint64_t) {
  crc32_byte(crc);
}
uint32_t ui1;
uint64_t g_99[4];
uint64_t crc;
uint64_t func_1() {
  uint64_t l_19 = 4UL;
  uint64_t l_4837[5][2][10];
  crc32_context = 0;
  for (crc = 0; crc <= 3; crc += 1)
    if (ui1 >= (safe_add_func_uint64_t_u_u(
                    l_19, l_4837[4][1][5] = safe_add_func_uint64_t_u_u(
                                                ~(crc != 0), crc32_context) &&
                                            0x57L) > 2)) {
      ui1 = crc;
      g_99[3] = l_4837[4][1][5];
    } else
      ui1 = l_4837[4][1][5];
  return crc;
}
int main() {
  int crc = func_1();
  transparent_crc(ui1, "g_3", crc);
  platform_main_end(crc32_context, crc);
  return 0;
}
