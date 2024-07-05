int fn4(_) { return _; }
int s;
unsigned w;
int ad[][5][7] = {{8}, 8};

int main() {
  w = 1;
  s ^= ad[1][1][0];
  printf("checksum = %X\n", s);
  return 0;
}