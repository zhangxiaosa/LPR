signed fn2(signed p1, signed p2) { return p1; }
int fn4(int p1, int p2) { return p1 % p2; }
unsigned s;
unsigned u;
int v;
static unsigned w = 254;
signed ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;
void fn9() {
  int ai[2];
  unsigned i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  w = 1;
  for (; i < 25; i += 20) {
  }
  for (af = 6; af >= 0; af -= 1)
    ai[0] = ai[0] ^ ad[255][254][af] = ai[0] ^ 8;
}
int main() {
  unsigned i;
  fn9();
  for (i = 0; i < 5; i++)
    s = s ^ ad[2][i][0];
  printf("checksum = %X\n", s);
  return 0;
}