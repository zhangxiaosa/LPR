typedef char uint8_t;
union {
  uint8_t f6;
} g_20;
uint8_t func_65() {
  if (g_20.f6)
    goto lbl_93;
  func_65();
  uint8_t l_1454;
  return l_1454;
lbl_93:
  g_20.f6 = l_1454;
  func_65();
  l_1454 = 0xEEACFBBFL;
  return l_1454;
}
int main() {}
