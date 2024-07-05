int s;
unsigned w;
int ad[][5][7] = {{8}, 8};

int main() {
  for (w = 1;;) {
    for (;;)
      ad[1][w][0] = 4294967295;
    break;
  }
  s ^= ad[1][1][0];
  printf("checksum = %X\n", s);
  return 0;
}