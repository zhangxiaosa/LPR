typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned uint32_t;
typedef unsigned uint64_t;
void fn1(uint32_t crc, int flag) {
  printf("checksum = %X\n", crc);
}
uint32_t crc32_context;
void fn2(b) { crc32_context = b; }
void fn3(val) { fn2(val); }
void fn4(uint64_t val, char *vname, int flag) { fn3(val); }
int32_t g_573;
int8_t g_4689;
int8_t fn5() {
  int16_t l_5913;
  int i;
  int32_t BGCGCl_6280 = g_573;
  l_5913 = BGCGCl_6280;
  int32_t l_6726 = 1L;
  for (i = 0; i < 10; i++)
    while (l_5913 > l_6726)
      l_5913 -= 1;
  if (g_4689 = l_5913)
    ;
}
int main() {
  int print_hash_value = 0;
  fn5();
  fn4(g_4689, "g_4689", print_hash_value);
  fn1(crc32_context, print_hash_value);
  return 0;
}

