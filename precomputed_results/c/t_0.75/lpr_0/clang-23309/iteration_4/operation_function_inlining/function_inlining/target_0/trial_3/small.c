int main() {
  int an = 250;
  int p3 = 0;
  if (an) {
    p3 = 2 || (an = 0);
    if (0xBCD1 - (1 - an) - 0xEC - p3 & 1)
      v = 1;
  }
  printf("checksum = %hx\n", v);
  return 0;
}