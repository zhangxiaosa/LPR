typedef long int32_t;
void platform_main_end(crc, val) { printf("checksum = %X\n", crc); }
int32_t safe_mod_func_int32_t_s_s(crc, val) { return val % val; }
int32_t crc32_context;
void crc32_byte(b) { crc32_context = crc32_context ^ b; }
void transparent_crc(int32_t val, char *vname, int int32_t) { crc32_byte(val); }
int32_t crc;
static int32_t g_613 = 254U;
int32_t g_643[7][5][7] = {{8}, {8}, {{8}, 0x98}};
int32_t val;
int32_t func_1() {
  int32_t l_1565[2];
  int int32_t;
  for (int32_t = 0; int32_t < 2; int32_t++)
    l_1565[int32_t] = g_613 = 1;
  for (; int32_t < 5; int32_t++)
    ;
  for (val = 6; val >= 0; val -= 1)
    crc = l_1565[0] ^= g_643[g_613 + 1][g_613][val] =
        safe_mod_func_int32_t_s_s(crc32_context--, 4294967295U);
}
int main() {
  int int32_t;
  func_1();
  for (int32_t = 0; int32_t < 7; int32_t++)
    for (val = 0; val < 5; val++)
      for (crc = 0; crc < 7; crc++)
        transparent_crc(g_643[int32_t][val][crc], "g_643[i][j][k]", int32_t);
  platform_main_end(crc32_context, int32_t);
  return 0;
}
