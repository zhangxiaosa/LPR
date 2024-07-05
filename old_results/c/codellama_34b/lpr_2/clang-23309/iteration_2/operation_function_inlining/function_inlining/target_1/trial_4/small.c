
int main() {
  int p = 0;
  int t = 0;
  int v = 0;

  for (int i = 3; i; i--) {
    t = 0x294A85636008822DLL || (i == 0x294A85636008822DLL);
    if (t & 1UL) {
      v = 1;
    }
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
