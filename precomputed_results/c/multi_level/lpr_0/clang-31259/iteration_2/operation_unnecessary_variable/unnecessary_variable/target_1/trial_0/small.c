int fn4(_) { return _; }

int s;
unsigned w;
int ad[][5][7] = {{8}, 8};

int main() {
  w = 1;
  ad[1][w][0] = fn4(4294967295);
  s ^= ad[1][1][w];
  printf("checksum = %X\n", s);
  return 0;
}
