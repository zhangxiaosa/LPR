int fn4(af, p2) { return p2; }
char p2;
int ad[][5][7] = {{8}, {8}, 8};
int af;
int fn9() {
  p2 = 1;
  for (; af;)
    ;
  for (; af >= 0; af -= 1)
    ad[1][p2][af] = fn4(af, 4294967295);
}
int main() {
  fn9();
  p2 = ad[2][1][0];
  printf("checksum = %d\n", p2);
  return 0;
}
