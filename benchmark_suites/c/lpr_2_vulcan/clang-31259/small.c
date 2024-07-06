int fn4(ad, p2) { return p2; }
char w;
int ad[][5][7] = {{8}, {8}, 8};
int p2;
int main() {
  w = 1;
  for (; p2;) {
  }
  for (; p2 >= 0; p2 -= 1)
    ad[1][w][p2] = fn4(w, 4294967295);
  printf("checksum = %X\n", ad[2][1][0]);
  return 0;
}
