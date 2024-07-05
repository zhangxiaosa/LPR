char fn2(char p1, int p2) { return p1; }
int fn3(int p1, int p2) { return p2; }
unsigned p;
unsigned u;
unsigned v_0_3;

int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn2(v_0_3 = fn3(4L, d), 3) + e[0];
  }
  p = v_0_3;
  printf("checksum = %X\n", p);
  return 0;
}