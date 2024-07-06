int fn4(p1, main) { return main % p1; }
char w;
signed ad_dim1[][5][7] = {{8}, {8}, {{8}, 0x98}};
int p1;
signed optimized_fn9() {
  w = 1;
  for (; p1;) {
  }
  for (; p1 >= 0; p1 -= 1)
    ad_dim1[1][w][p1] = fn4(1, w);
}
int main() {
  optimized_fn9();
  printf("checksum = %x\n", ad_dim1[2][1][0]);
  return 0;
}
