int fn4(int p1, int p2) { return p1 % p2; }

int fn5(int p1, int p2) { return p1; }

int s;
int u;
int v;
static int w = 254;
int ad_0 = 8;
int ad_1 = 8;
int ad_2_0_0 = 8;
int ad_2_1_0 = 0x98;

int af;

int fn9() {
  int ai_2;
  int ai_1;
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 2; i++)
      ;
    for (af = 6; af >= 0; af -= 1) {
      v = ai[0] ^= ad_3_2_1[3][2][af] = fn4(fn5(1, fn5(255, u--)), 4294967295);
    }
    return af;
  }
}

int main() {
  fn9();
  s = ad_2_1_0;
  printf("checksum = %d\n", s);
  return 0;
}