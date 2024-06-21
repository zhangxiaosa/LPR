typedef char int16_t;
typedef int int32_t;
int32_t safe_mod_func_int32_t_s_s(si1, si2) {
  return si2 == 0 || si1 && si2 ? si2 : si1 % si1;
}
int32_t safe_add_func_uint32_t_u_u(ui1, ui2) { return ui1 + ui2; }
int32_t safe_sub_func_uint32_t_u_u(ui1, ui2) { return ui1 - ui2; }
int32_t g_83;
int32_t g_813[7][1];
static int32_t func_8(int16_t);
static int32_t func_1() { func_8(1); }
int32_t func_8(int16_t p_9) {
  int32_t l_26 = safe_mod_func_int32_t_s_s(p_9, p_9);
  if (l_26)
    for (l_26 = 0; l_26 <= 49; l_26 = safe_add_func_uint32_t_u_u(l_26, 8)) {
      if (p_9, safe_sub_func_uint32_t_u_u(6, p_9) ||
                   safe_mod_func_int32_t_s_s(p_9, 0xBC2AB98CL))
        ;
      else {
        g_83 = p_9;
        break;
      }
      p_9 = safe_sub_func_uint32_t_u_u(
          safe_mod_func_int32_t_s_s(safe_mod_func_int32_t_s_s(p_9, p_9), p_9),
          p_9);
    }
  else {
    int32_t l_1955[3];
    g_813[2][0] = safe_mod_func_int32_t_s_s(
        safe_mod_func_int32_t_s_s(l_1955[1], p_9), 0x9CFB623FL);
  }
}
int main() { func_1(); }
