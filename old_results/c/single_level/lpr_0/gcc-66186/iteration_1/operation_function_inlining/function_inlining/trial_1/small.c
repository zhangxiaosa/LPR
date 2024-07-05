int g;
int h;
int fn1(unsigned short, unsigned, unsigned short);
unsigned short fn2(signed, unsigned short, unsigned);
short fn3(signed, signed, signed, unsigned short, int);

int main() {
  int n = 1L;
  unsigned o = 0x5A683F60L;
  {
    int s = 0x57638FF4L;
    int t = 1L;
    unsigned p1 = n;
    unsigned p2 = g;
    unsigned p3 = g;
    {
      signed p1 = g;
      unsigned short p2 = s;
      unsigned p3 = g;
      unsigned u = 0x30A04A8FL;
      if (fn3(0x9A5DL, g, p2, u, p1))
        ;
      unsigned short result = 0;
    }
  }
  return o;
}