typedef signed int32_t;
struct S0 {
  signed f2 : 18;
};
struct S0 g_210;
char f2() {
  int32_t BHbHbdl_2818_f2 = g_210.f2;
  g_210.f2 = BHbHbdl_2818_f2;
  int32_t Brcrcl_2818_f2 = f2 && BHbHbdl_2818_f2;
  int32_t Brcrcbl_2818_f6 = g_210.f2;
  int32_t Brcrccg_27_f5 = Brcrcbl_2818_f6 | -(f2 && g_210.f2) - Brcrcl_2818_f2;
  g_210.f2 = Brcrccg_27_f5;
}
int main() {}
