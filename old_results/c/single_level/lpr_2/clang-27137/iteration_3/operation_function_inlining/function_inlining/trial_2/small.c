int main() {
  short q = 0;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  
  // Inlined printf("checksum = %X\n", q);
  // Convert q to hexadecimal string manually
  unsigned short temp = q;
  char hex[5];
  hex[4] = '\0';
  int i = 3;
  while (temp != 0 && i >= 0) {
    unsigned short digit = temp & 0xF;
    hex[i] = (digit < 10) ? (digit + '0') : (digit + 'A' - 10);
    temp >>= 4;
    i--;
  }
  printf("checksum = %s\n", hex);
  
  return 0;
}