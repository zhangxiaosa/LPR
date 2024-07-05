char fn2(char p1) { return p1; }
int fn3(int p1, int p2) { return p2; }
int fn4(int p1, int p2) { return p1 + p2; }

int main() {
  int temp2;
  int checksum;

  for (int u = 0; u < 51; ++u) {
    temp2 = fn2(fn3(4L, d), 3);
    d = fn4(temp2, 0x9EE7F9D1C772505BLL);
  }
  
  checksum = temp2;
  printf("checksum = %X\n", checksum);
  return 0;
}