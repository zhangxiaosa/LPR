typedef short b;
typedef int c;
typedef unsigned short e;
typedef unsigned f;

c g;
c h;

f fn4(c p1, e p2, e p3, f p4, e p5) {
  b ak[8];
  
  // Loop unrolling starts
  p2 = 0;
  if (h < 0) {
    p4 = 0;
    if (ak[p3])
      break;
       
    p4 = 1;
    if (ak[p3])
      break;

    p4 = 2;
    if (ak[p3])
      break;

    p4 = 3;
    if (ak[p3])
      break;

    p4 = 4;
    if (ak[p3])
      break;

    p4 = 5;
    if (ak[p3])
      break;

    p4 = 6;
    if (ak[p3])
      break;

    p4 = 7;
    if (ak[p3])
      break;
  }
  // Loop unrolling ends
  
  return g;
}

int main() {
  c n = 1L;
  c p5 = -7L;
  if (fn4(p5, 4294967287UL, p5, g, n))
    ;
}