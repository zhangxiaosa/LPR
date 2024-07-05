char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

unsigned p;
void fn5(p1) { p = p1; }

unsigned u;
int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn2(fn3(4L, d), 3) + e[0];
  }
  fn5(fn3(4L, d));
  printf("checksum = %X\n", p);
  return 0;
}