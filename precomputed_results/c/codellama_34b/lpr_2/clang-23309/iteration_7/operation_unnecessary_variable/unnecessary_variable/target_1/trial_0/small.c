
int main() {
  int tmp1 = 1 || (0 = 0);
  int tmp2 = 0xBCD1 - (1 - 0);
  int tmp3 = tmp2 - tmp1 & 1;
  int v_int = tmp3;
  printf("checksum = %d\n", v_int);
  return 0;
}
