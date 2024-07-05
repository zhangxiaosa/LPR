
short fn2() {
  return 0;
}

short fn3() {
  return 0;
}

unsigned v;
unsigned char w;
unsigned ac = 1;
unsigned char fn10(short, short);
short fn13() {
  fn10(0, 0);
  return 1;
}

unsigned char fn10(short, short) {
  short an = 0;
  for (w = 3; w; w--) {
    an = 250;
    if (an == 0x294A85636008822D)
      v = 1;
  }
  return 3;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
