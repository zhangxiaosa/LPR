
s_short f(s_short p1, s_short p2) {
  s_short result = (s_short)((p1 - p2) & 0xFFFF);
  return result;
}
