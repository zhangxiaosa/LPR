int u_opt;
int v3;
int main() {
  int d = 2L;
  for (; u_opt < 51; ++u_opt) {
    v3 = d;
    d = v3 + 0x9EE7F9D1C772505BLL;
  }
  printf("checksum = %X\n", v3);
  return 0;
}