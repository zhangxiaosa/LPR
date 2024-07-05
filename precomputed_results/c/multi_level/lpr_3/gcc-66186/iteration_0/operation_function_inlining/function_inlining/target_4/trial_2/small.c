typedef signed a;

typedef short b;

typedef int c;

typedef unsigned d;

typedef unsigned short e;

typedef unsigned f;

c g;

c h;

c fn5() {
  c n = 1L;
  f o = 0x5A683F60L;
  {
    c ad = -7L;
    a ae = 0xA3L;
    c p1 = 0x9A5DL;
    c p2 = g;
    c p3 = 0x57638FF4L;
    e p4 = 0x30A04A8FL;
    c p5 = g;
    // Inlined fn4 body
    b ak[8];
    for (p2 = 0; p2 <= 7; p2 += 1)
      for (f p4 = 0; p4 <= 7; p4 += 1)
        if (h < 0)
          for (f p4 = 0; p4 <= 7; p4 += 1)
            if (ak[0x57638FF4L])
              break;
    // End of inlined fn4 body
    return ae;
  }
  return o;
}

int main() { fn5(); }