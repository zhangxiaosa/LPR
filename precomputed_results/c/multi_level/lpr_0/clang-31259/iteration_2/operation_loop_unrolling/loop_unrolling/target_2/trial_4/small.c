int fn4(int p1, int _) { return _; }
int s;
unsigned w;
int ad[][5][7] = {{8}, 8};
int af;

int main() {
  w = 1;

  while (1) {
    af = 0;

    ad[1][w][af] = fn4(1, 4294967295);
    af -= 1;

    ad[1][w][af] = fn4(1, 4294967295);
    af -= 1;

    ad[1][w][af] = fn4(1, 4294967295);
    af -= 1;

    // repeat the above statement multiple times as needed

    break;
  }

  s ^= ad[1][1][0];
  printf("checksum = %X\n", s);
  return 0;
}