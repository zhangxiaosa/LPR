
int main() {
  short an = 0x294A;
  int tmp2 = an - 1;
  int tmp3 = tmp2 & 1;
  int v_int = tmp3;
  printf("checksum = %d\n", v_int);
  return 0;
}
