
int fn1_int(int p1) {
  printf("checksum = %X\n", p1);
  return p1;
}

unsigned char fn1_char(unsigned char p1) {
  printf("checksum = %X\n", p1);
  return p1;
}

int fn2_int(int p1, int p2) {
  return p1 - p2;
}

unsigned char fn2_char(unsigned char p1, unsigned char p2) {
  return p1 - p2;
}

unsigned char fn4_int(int p1) {
  return (unsigned char)p1;
}

unsigned char fn4_char(unsigned char p1) {
  return p1;
}

int fn6_int(int p1, int p2) {
  return p1 - p2;
}

unsigned char fn6_char(unsigned char p1, unsigned char p2) {
  return p1 - p2;
}

int main() {
  int p_int = 0;
  int t_int = 0;
  int v_int = 0;
  short w_short = 0;
  unsigned char p_char = 0;
  unsigned char t_char = 0;
  unsigned char v_char = 0;
  unsigned char w_char = 0;
  unsigned char ac_char = 0;
  int al_int = 0;
  unsigned char al_char = 0;
  short an_short = 0;
  unsigned char an_char = 0;
  unsigned char ao_char = 0;

  fn13();
  p_int = v_int;
  fn1_int(p_int);
  return 0;
}

int fn13() {
  int al_int = 3;
  short an_short = 250;
  for (w_short = 3; w_short; w_short -= 1) {
    an_short = 250;
    t_int = ac_char || (an_short = w_short) == 0x294A85636008822DLL;
    short ao_short = 0xBCD1;
    if (fn2_int(ao_short - fn4_char(fn6_int(1, an_short), 0xECL), t_int) & 1UL)
      v_int = 1;
  }
  return al_int;
}
