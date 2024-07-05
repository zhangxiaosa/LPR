int fn4(int p1, int _) { return _; }

int s;
unsigned w;
int ad[][5][7] = {{8}, 8};
int af;
int main() {
  // Unrolled loop for w = 1:
  ad[1][1][0] = fn4(1, 4294967295);
  ad[1][1][1] = fn4(1, 4294967295);
  ad[1][1][2] = fn4(1, 4294967295);
  ad[1][1][3] = fn4(1, 4294967295);
  ad[1][1][4] = fn4(1, 4294967295);
  ad[1][1][5] = fn4(1, 4294967295);
  ad[1][1][6] = fn4(1, 4294967295);

  s ^= ad[1][1][0];
  printf("checksum = %X\n", s);
  return 0;
}