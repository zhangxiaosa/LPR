int fn2(int p1, int p2) { 
  return p1; 
}

int fn4(int p1, int p2) { 
  return p1 % p2; 
}

unsigned s;
unsigned u;
int v;
static unsigned w = 254;
int ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;

void fn9() {
  int ai[2];
  ai[0] = 8;
  ai[1] = 8;
  w = 1;

  for (af = 6; af >= 0; af -= 1) 
    v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, u--), 4294967295U);
}

int main() {
  fn9();
  s = s ^ ad[2][0][0] ^ ad[2][1][0] ^ ad[2][2][0] ^ ad[2][3][0] ^ ad[2][4][0];
  printf("checksum = %X\n", s);
  return 0;
}