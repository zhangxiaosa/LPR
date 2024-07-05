
short fn13() {
  for (w = 3; w; w -= 1) {
    short an = 250UL;
    p2 = fn5(p2, p4) || (an = w) == 0x294A85636008822DLL;
    if ((p1 - p2) & 1UL)
      return 1UL;
  }
  return 3L;
}

int main() {
  short value = fn13();
  printf("checksum = %X\n", value);
  return 0;
}
