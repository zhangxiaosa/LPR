int t;
long v;
short w;
short ac = 1;
char fn4(char p1, char p2) { return p1; }

int main() {
  int an = 250;  // constant propagation

  for (w = 3; w; w -= 1)
    if (t = ac || (250 == 0x294A85636008822D)) {  // copy propagation
      short ao = 0xBCD1;
      if ((ao - fn4(1 - 250, 0xEC)) - t & 1)
        v = 1;
    }

  int p = v;
  printf("checksum = %X\n", p);
  return 0;
}