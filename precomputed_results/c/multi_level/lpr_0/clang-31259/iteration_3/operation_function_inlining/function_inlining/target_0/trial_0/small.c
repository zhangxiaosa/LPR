unsigned w;
int ad[][5][7] = {{8}, 8};
int af;
int main() {
  w = 1;
  for (; af;) {
  }
  for (; af >= 0; af -= 1)
    ad[1][w][af] = 4294967295;
  printf("checksum = %X\n", ad[1][1][0]);
  return 0;
}