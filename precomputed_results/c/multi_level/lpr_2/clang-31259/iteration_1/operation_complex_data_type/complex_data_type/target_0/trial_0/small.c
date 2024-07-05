signed fn2(signed p1, signed p2) { return p1; }

int fn4(int p1, int p2) { return p1 % p2; }

unsigned s;
unsigned u;
int v;
static unsigned w = 254;
signed ad[][5][7]; // Decomposed array declaration

// Decomposed variables for array dimensions
signed ad_dim1_size = 3;
signed ad_dim2_size = 5;
signed ad_dim3_size = 7;

// Decomposed variables for initialized values
signed ad_0_0_0 = 8;
signed ad_1_0_0 = 8;
signed ad_2_0_0 = 8;
signed ad_2_0_1 = 152;

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
    v = ai[0] ^= ad[w + 1][w][af] = fn4(fn2(1, u--), 4294967295U);
}

int main() {
  unsigned i;
  fn9();
  for (i = 0; i < 5; i++)
    s = s ^ ad[2][i][0];
  printf("checksum = %X\n", s);
  return 0;
}