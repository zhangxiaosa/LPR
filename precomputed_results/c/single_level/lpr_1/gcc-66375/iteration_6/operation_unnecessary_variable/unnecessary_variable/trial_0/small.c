char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned p;

void fn5(p1) { p = p1; }

unsigned v_0_3;

short fn11() {
  int d = 2L;

  unsigned e[9];
  int i;
  for (i = 0; i < 9; i++)
    e[i] = 0x9EE7F9D1C772505BLL;

  int temp_d;

  for (unsigned u = 0; u < 51; ++u) {
    temp_d = d;

    v_0_3 = fn3(4L, temp_d);

    d = fn2(v_0_3, 3) + e[0];
  }

  return 0;
}

int main() {
  fn11();
  fn5(v_0_3);
  printf("checksum = %X\n", p);

  return 0;
}