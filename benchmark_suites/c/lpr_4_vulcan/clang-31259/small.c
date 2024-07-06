char w;
int ad1[][5][7] = {{8}, {8}, 8};
int af;
int fn4(fn9, p2) { return p2; }
int p2() {
  w = 1;
  for (; af;)
    ;
  for (; af >= 0; af -= 1)
    ad1[1][w][af] = fn4(af, 4294967295);
}
int main() {
  p2();
  int af = ad1[2][1][0];
  printf("s_unrolled_iter_1 = %X\n", af);
  return 0;
}
