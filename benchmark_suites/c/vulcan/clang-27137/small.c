typedef short int8_t;
void platform_main_end(l_6726, l_5913) { printf("checksum = %X\n", l_5913); }
int8_t l_5913;
int8_t func_1() {
  int8_t platform_main_end;
  platform_main_end = l_5913;
  int8_t l_6726 = 1L;
  for (l_5913 = 0; l_5913 < 10; l_5913++)
    while (platform_main_end > l_6726)
      platform_main_end -= 1;
  l_5913 = platform_main_end;
}
int main() {
  func_1();
  platform_main_end(l_5913, l_5913);
  return 0;
}
