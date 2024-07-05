int u;
int w = 254;
int ad[][5][7] = {{8}, {8}, {{8}, 0x98}};
int af;
int main() {
  int ai[2];
  int j;
  for (j = 0; j < 2; j++)
    ai[j] = 8;
  w = 1;
  for (; j < 25; j += 20) {
  }
  for (af = 6; af >= 0; af -= 1)
    ai[0] ^= ad[2][1][af];
  printf("checksum = %X\n", ad[2][1][0]);
  return 0;
}