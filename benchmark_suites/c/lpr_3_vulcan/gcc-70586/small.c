char q;
unsigned t[7][1];
int fn3(p1, p2) { return p2 == 0 || p1 && p2 ? p2 : p1 % p2; }
static short fn7(short p1) {
  int ac = fn3(p1, p1);
  if (ac) {
    unsigned ah;
    for (ah = 0; ah <= 49; ah = ah + 8) {
      unsigned ah;
      if (ac && fn3(q, 0xBC2AB98CL))
        ;
      else
        ah = ac;
      if (!ah)
        break;
      p1 = fn3(fn3(p1, p1), p1) - ah;
      q = p1;
      p1 = fn3(0x7D765DB6L, p1);
    }
  } else
    t[2][0] = fn3(fn3(0, p1), 0x9CFB623FL);
}
int main() { fn7(1); }
