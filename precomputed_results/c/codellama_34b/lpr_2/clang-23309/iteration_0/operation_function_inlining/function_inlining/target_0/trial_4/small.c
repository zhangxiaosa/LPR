c
d fn10(g p1, e p2) {
  b af = 0x2F2F6D26L;
  d ag = 248UL;
  b ah = 2L;
  d ai = 0xECL;
  d aj = 0x2F2F6D26L;
  d ak = 0x294A85636008822DLL;
  d al = 1UL;
  b am = 0xBCD1L;
  b an = 0x2F2F6D26L;

  if (p2 & 1UL) {
    p2 = af ^ aj;
    p2 = p2 >> 1;
    p2 = p2 | 0x294A85636008822DLL;
  } else {
    p2 = af;
  }

  if (p2 & 1UL) {
    p2 = p2 >> 1;
    p2 = p2 | 0x2F2F6D26L;
  }

  return p2;
}
