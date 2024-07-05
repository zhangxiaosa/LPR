typedef signed a;
typedef short b;
typedef int c;
typedef unsigned short e;
typedef unsigned f;
c g;
c h;

f fn4(c, e, e, f, e);
c fn5() {
  a ae = 0xA3L;
  c p1 = 0x9A5DL;
  c p2 = g;
  c p3 = 0x57638FF4L;
  e p4 = 0x30A04A8FL;
  c p5 = g;
  if (fn4(p1, p2, p3, p4, p5))
    ;
  return ae;
}
f fn4(c p1, e p2, e p3, f p4, e p5) {
  b ak[8];

  // Unrolled loop
  p4 = 0;
  if (h < 0)
    if (ak[p3])
      break;

  p4 = 1;
  if (h < 0)
    if (ak[p3])
      break;

  p4 = 2;
  if (h < 0)
    if (ak[p3])
      break;

  p4 = 3;
  if (h < 0)
    if (ak[p3])
      break;

  p4 = 4;
  if (h < 0)
    if (ak[p3])
      break;

  p4 = 5;
  if (h < 0)
    if (ak[p3])
      break;

  p4 = 6;
  if (h < 0)
    if (ak[p3])
      break;

  p4 = 7;
  if (h < 0)
    if (ak[p3])
      break;

  return g;
}

int main() {
  fn5();
}