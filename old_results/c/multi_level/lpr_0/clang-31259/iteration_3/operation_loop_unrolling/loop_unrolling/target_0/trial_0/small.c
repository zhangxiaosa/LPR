int fn4(_) { return _; }

unsigned w;
int ad[][5][7] = {{8}, 8};
int af;
int main() {
  w = 1;
  int checksum = 0;

  // Unrolled loop
  ad[1][w][af] = fn4(4294967295);
  af -= 1;
  ad[1][w][af] = fn4(4294967295);
  af -= 1;
  ad[1][w][af] = fn4(4294967295);
  af -= 1;
  ad[1][w][af] = fn4(4294967295);

  printf("checksum = %X\n", ad[1][1][0]);
  return 0;
}