int fn3(p1, p2) { return p2 == 0 || p1 && p2 ? p2 : p1 % p2; }
char t[7][1];
static int fn7(short p1) {
  unsigned af = 0;
  for (; af <= 49; af += 8) {
    if (p1 && fn3(p1, 0xBC2AB98CL))
      ;
    else if (!af) {
      printf("l_1179=%lld\n", (long long)fn3(p1, 0xBC2AB98CL));
      break;
    }
    p1 = fn3(fn3(0x809CL, p1), p1) - fn3(p1, p1);
  }
  t[2][0] = fn3(fn3(af, af), 0x9CFB623FL);
}
static int fn8() { fn7(1); }
int main() { fn8(); }
