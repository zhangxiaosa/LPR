typedef int int8_t;
typedef unsigned uint8_t;
int8_t safe_mod_func_int8_t_s_s(si1, si2) { return si2 == 0 ? si2 : si2 % si2; }
int8_t safe_add_func_int32_t_s_s(si2, g_176) {
  return si2 && g_176 && si2 > 2147483647 - g_176 || si2 < 0 && g_176 < 0 && si2
             ? si2
             : si2 + g_176;
}
uint8_t g_176;
int8_t func_2(int8_t, uint8_t, int8_t);
int8_t func_39(int8_t);
int8_t func_1() {
  int8_t l_6 = 0L;
  func_2(g_176, g_176, g_176);
  return l_6;
}
int8_t func_2(int8_t si2, uint8_t g_176, int8_t int8_t) {
  func_39(g_176);
  return g_176;
}
int8_t func_39(p_40) {
  for (; g_176 < 12; g_176 = safe_add_func_int32_t_s_s(g_176, 3)) {
    int8_t l_220 = safe_mod_func_int8_t_s_s(p_40, p_40);
    int8_t l_319 = 0xE3L;
    if (p_40 <= l_319)
      ;
    else if (l_220)
      break;
  }
  return g_176;
}
int main() { func_1(); }
