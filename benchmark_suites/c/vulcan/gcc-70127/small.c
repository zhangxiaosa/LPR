typedef short int8_t;
void platform_main_end(crc, flag) { printf("checksum = %X\n", crc); }
int8_t crc32_context;
void crc32_byte(b) { crc32_context = b; }
void transparent_crc(int8_t val, char *vname, int int8_t) { crc32_byte(val); }
struct S0 {
  int8_t f0;
  signed f1 : 22;
};
struct {
  unsigned int8_t;
} g_2;
struct S0 g_217[1];
int8_t func_14(int8_t, int8_t, int8_t, int8_t, int8_t);
int8_t func_1() { func_14(g_2.int8_t, 3, 2, g_2.int8_t, 9); }
int8_t func_14(int8_t p_15, int8_t p_16, int8_t p_17, int8_t p_18,
               int8_t p_19) {
  struct S0 l_2620 = {8L, 666};
  for (p_15 = 0; p_15 >= 0; p_15 -= 1)
    for (; crc32_context <= 1; crc32_context += 1)
      l_2620 = g_217[p_15] = l_2620;
}
int main() {
  func_1();
  for (crc32_context = 0; crc32_context < 1; crc32_context++)
    transparent_crc(g_217[crc32_context].f1, "g_217[i].f1", crc32_context);
  platform_main_end(crc32_context, crc32_context);
  return 0;
}
