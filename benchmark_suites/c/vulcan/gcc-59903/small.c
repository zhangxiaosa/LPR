typedef long int32_t;
typedef char uint8_t;
uint8_t safe_lshift_func_uint8_t_u_s(left, right) {
  return left > right ? left : left << left;
}
struct S0 {
  int32_t f0;
  uint8_t f1;
};
int32_t g_81[4];
struct S0 g_152[2];
struct S0 f0(uint8_t p_130, struct S0 f0) {
  struct S0 l_151 = {0x15L};
  int32_t l_195;
  int32_t l_164;
  for (; l_195; l_195 += 1)
    for (p_130 = 0; p_130 <= 39; ++p_130)
      for (f0.f0 = 0; f0.f0 <= 2; f0.f0 += 1) {
        g_152[0] = l_151;
        l_151.f0 = g_81[f0.f0];
        if (!g_152[0].f0)
          ;
        else {
          l_195 = safe_lshift_func_uint8_t_u_s(g_152[0].f0, 2) && f0.f1;
          for (; l_164; l_164 += 1)
            g_152[0] = f0;
        }
      }
  return f0;
}
int main() {}
