char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned p;
unsigned u;
unsigned v[1][4];
int main() {
  int i;
  int d = 2;
  unsigned e_0 = 0x9EE7F9D1C772505BLL;
  unsigned e_1 = 0x9EE7F9D1C772505BLL;
  unsigned e_2 = 0x9EE7F9D1C772505BLL;
  unsigned e_3 = 0x9EE7F9D1C772505BLL;
  unsigned e_4 = 0x9EE7F9D1C772505BLL;
  unsigned e_5 = 0x9EE7F9D1C772505BLL;
  unsigned e_6 = 0x9EE7F9D1C772505BLL;
  unsigned e_7 = 0x9EE7F9D1C772505BLL;
  unsigned e_8 = 0x9EE7F9D1C772505BLL;

  for (; u < 51; ++u) {
    unsigned e[9];
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    unsigned temp_v = fn3(4, d);
    v[0][3] = temp_v;
    d = fn2(temp_v, 3) + e_0;
  }
  i = 0;
  p = v[i][3];
  printf("checksum = %x\n", p);
  return 0;
}