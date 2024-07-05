int t;
long v;
int w;
int ac = 1;
char fn4(char p1, char p2) { return p1; }
int fn12(int p1, int p2, char p3, int p4, int p5) {
  int an1;
  if (an1 = 250) {
    p2 = ac || (an1 = 3);
    short ao1 = 0xBCD1;
    if (ao1 - fn4(1 - an1, 0xEC) - p2 & 1)
      v = 1;
  }

  int an2;
  if (an2 = 250) {
    p2 = ac || (an2 = 2);
    short ao2 = 0xBCD1;
    if (ao2 - fn4(1 - an2, 0xEC) - p2 & 1)
      v = 1;
  }

  int an3;
  if (an3 = 250) {
    p2 = ac || (an3 = 1);
    short ao3 = 0xBCD1;
    if (ao3 - fn4(1 - an3, 0xEC) - p2 & 1)
      v = 1;
  }

  return 3;
}

int main() {
  fn12(2, 248, t, 1, 1);
  printf("checksum = %ld\n", v);
  return 0;
}