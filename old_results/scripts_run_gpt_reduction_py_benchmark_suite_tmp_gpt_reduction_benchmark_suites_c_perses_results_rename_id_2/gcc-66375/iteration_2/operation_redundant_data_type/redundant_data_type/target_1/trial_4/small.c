int u_opt;
int v3;

int main() {
  int d = 2L;
  
  for (; u_opt < 51; ++u_opt) {
    v3 = (unsigned int)d;
    char p1 = (char)v3;
    char fn2 = (char)p1;
    d = (int)fn2 + 0x9EE7F9D1C772505BLL;
  }
  
  printf("checksum = %X\n", v3);
  return 0;
}