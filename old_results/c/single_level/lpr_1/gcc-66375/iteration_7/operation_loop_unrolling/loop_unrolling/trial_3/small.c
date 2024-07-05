char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned p;

void fn5(p1) { p = p1; }

unsigned u;

unsigned v_0_3;

int main() {
  int d = 2L;

  for (; u < 51; u += 3) {
    unsigned e[9];

    // Unrolled iteration 1
    e[0] = 0x9EE7F9D1C772505BLL;
    e[1] = 0x9EE7F9D1C772505BLL;
    e[2] = 0x9EE7F9D1C772505BLL;
    e[3] = 0x9EE7F9D1C772505BLL;
    e[4] = 0x9EE7F9D1C772505BLL;
    e[5] = 0x9EE7F9D1C772505BLL;
    e[6] = 0x9EE7F9D1C772505BLL;
    e[7] = 0x9EE7F9D1C772505BLL;
    e[8] = 0x9EE7F9D1C772505BLL;
    d = fn2(v_0_3 = fn3(4L, d), 3) + e[0];

    // Unrolled iteration 2
    e[0] = 0x9EE7F9D1C772505BLL;
    e[1] = 0x9EE7F9D1C772505BLL;
    e[2] = 0x9EE7F9D1C772505BLL;
    e[3] = 0x9EE7F9D1C772505BLL;
    e[4] = 0x9EE7F9D1C772505BLL;
    e[5] = 0x9EE7F9D1C772505BLL;
    e[6] = 0x9EE7F9D1C772505BLL;
    e[7] = 0x9EE7F9D1C772505BLL;
    e[8] = 0x9EE7F9D1C772505BLL;
    d = fn2(v_0_3 = fn3(4L, d), 3) + e[0];

    // Unrolled iteration 3
    e[0] = 0x9EE7F9D1C772505BLL;
    e[1] = 0x9EE7F9D1C772505BLL;
    e[2] = 0x9EE7F9D1C772505BLL;
    e[3] = 0x9EE7F9D1C772505BLL;
    e[4] = 0x9EE7F9D1C772505BLL;
    e[5] = 0x9EE7F9D1C772505BLL;
    e[6] = 0x9EE7F9D1C772505BLL;
    e[7] = 0x9EE7F9D1C772505BLL;
    e[8] = 0x9EE7F9D1C772505BLL;
    d = fn2(v_0_3 = fn3(4L, d), 3);
  }

  fn5(v_0_3);
  printf("checksum = %X\n", p);
  return 0;
}