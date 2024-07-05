unsigned fn5(unsigned p1, unsigned p2) {
  return p1;
}

unsigned s;
unsigned u;
int v;
static unsigned w = 254U;
signed ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
short ae;
int af;

signed fn9() {
  int ai[2];
  int i;
  
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  
  for (w = 1;;) {
    for (; i < 5; i++) {
    }
    
    for (af = 6; af >= 0; af -= 1) {
      v = ai[0] ^= ad[w + 1][w][af] = (1 % (255U)) % 4294967295U;
    }
    
    return ae;
  }
}

int main() {
  fn9();
  s = ad[2][1][0];
  printf("checksum = %X\n", s);
  
  return 0;
}