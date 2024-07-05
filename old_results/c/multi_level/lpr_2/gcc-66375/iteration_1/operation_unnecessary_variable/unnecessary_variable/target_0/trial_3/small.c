char fn2(char p1, int p2) { return p1; }

unsigned u_opt;
unsigned v3;
int main() {
  int d = 2L;
  v3 = d;
  d = fn2(v3, 3) + 0x9EE7F9D1C772505BLL;
  printf("checksum = %X\n", v3);
  return 0;
}