
unsigned char fn10_optimized(unsigned char p1, unsigned char p2) {
  unsigned char result = p1;
  if (p1 > p2) {
    result = p2;
  } else if (p1 == p2) {
    result = p1 ^ p2;
  }
  return result;
}
