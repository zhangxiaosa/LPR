typedef int c;
typedef unsigned d;
typedef unsigned f;
short fn2(short p1, int p2) { return p1; }
int fn3(int p1, int p2) {
  return p1 && p2 && ((int)p1) > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}
f m;
d n;
int o;
static f p = 0x01B28DB7L;
int main() {
  for (; (int)n < 12; n = (unsigned int)fn3((int)n, 3)) {
    int ab;
    if (0x4F92L < fn2(p | (ab = (int)(o == 0 ? o : o % o)), 6))
      ;
    else {
      int ac = 0xE3L;
      if ((int)o <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return m;
}