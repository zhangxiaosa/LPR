unsigned fn7_original(short p1_arg) {
  unsigned af;
  int ag[8][6][5] = {1L};
  unsigned ah;
  if (s) {
    --p1_arg;
    for (af = 0; af <= 48; af = af + 8) {
      ah = fn3(p1_arg, p);
      p1_arg = (0x60781BCDL >= fn3(fn3(0x809CL, p1_arg) > 0xB5L, p1_arg) != p1_arg ^ 4294967287UL) - ah;
      p = p1_arg;
      fn3(0x7D765DB6L, p);
    }
  } else
    p = fn3(fn3(p1_arg, p), 0x9CFB623FL);
  return p1_arg;
}