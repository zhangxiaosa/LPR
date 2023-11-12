unsigned e;
short g;
short a = 1;

int main() {
  unsigned long f = 0;
  int c;
  
  for (g = 3; g; g -= 1) {
    short d = 0xBCD1;

    if ((d - (1 - 250UL)) & 1UL)
      f = 1UL;
  }

  e = 1UL;
  printf("checksum = %X\n", e);
  return 0;
}