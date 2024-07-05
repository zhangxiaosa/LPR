
u_char fn14(u_char p1, int p2) {
  u_char result = 0;
  result += p1 * (p2 & 1);
  result += p1 * (p2 & 2);
  result += p1 * (p2 & 4);
  result += p1 * (p2 & 8);
  return result;
}
