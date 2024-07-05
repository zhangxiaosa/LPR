signed p1;
signed p2;
short p1;
short p2;
int p1;
int p2;
unsigned p1;
unsigned p2;
unsigned s;
unsigned u;
int v;
static unsigned w;
short ae;
int af;
unsigned ah;
int ai[2];
int i;
int j;
signed ad[7][5][7];

int fn2(signed p1, signed p2) {
  return p1;
}

short fn3(short p1, short p2) {
  return p1;
}

int fn4(int p1, int p2) {
  return p1 % p2;
}

unsigned fn5(unsigned p1, unsigned p2) {
  return p1;
}

signed fn9() {
  unsigned ah;
  int ai[2];
  int i;
  
  ah = 3U;
  
  for (i = 0; i < 2; i++) {
    ai[i] = 8;
  }
  
  for (w = 1;;) {
    for (; i < 5; i++) {
    }
    
    for (af = 6; af >= 0; af -= 1) {
      v = ai[0] ^= ad[w + 1][w][af] = fn4(fn3(1, fn5(255U, fn2(ah, u--))), 4294967295U);
    }
    
    return ae;
  }
}

int main() {
  int i;
  int j;
  
  fn9();
  
  for (i = 0; i < 7; i++) {
    for (j = 0; j < 5; j++) {
      s = s ^ ad[i][j][0];
    }
  }
  
  printf("checksum = %X\n", s);
  return 0;
}